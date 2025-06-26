#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}

/*

Sample Input
10
Your Output
Enter the value of n: 2 4 6 8 10 

*/
