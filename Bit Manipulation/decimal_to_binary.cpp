#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 0;
    int ans = 0;
    
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10,i) + ans);
        n = n >> 1;
        i++;
    }
    cout << "answer is: " << ans;
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string binary = "";

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        binary += (n % 2) + '0';
        n = n / 2;
    }

    reverse(binary.begin(), binary.end());

    cout << binary;
}
