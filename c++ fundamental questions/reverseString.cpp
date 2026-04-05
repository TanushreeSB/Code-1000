#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string rev = "";  // new string for reversed

    for(int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];  // append characters from end
    }

    cout << rev;
    return 0;
}

---------

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // input string
    int n = s.size();

    int left = 0, right = n - 1;
    while(left < right) {
        swap(s[left], s[right]);  // swap characters
        left++;
        right--;
    }

    cout << s; // reversed string
    return 0;
}
