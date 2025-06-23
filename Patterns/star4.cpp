#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        // Print spaces first
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for(int k = 0; k < n - i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*

Sample Input
5
Your Output
*****
 ****
  ***
   **
    *

*/
