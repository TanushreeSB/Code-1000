#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    
    int left = 0, right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right]){
            cout << "not palindrome";
            return 0;
        }
        left++;
        right--;
    }
    cout << "palindrome";
    return 0;
}

---

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "madam";
    bool isPalindrome = true;

    int left = 0, right = s.size() - 1;

    while(left < right){
        if(s[left] != s[right]){
            isPalindrome = false;
            break; // exit loop if mismatch
        }
        left++;
        right--;
    }

    // print result instead of returning true/false
    if(isPalindrome){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}
