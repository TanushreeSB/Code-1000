#include <bits/stdc++.h>
using namespace std;

int* printDivisors(int n, int &size) {
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
        }
    }

    sort(ans.begin(), ans.end());

    size = ans.size();
    int* arr = new int[size]; 
    
    for (int i = 0; i < size; i++) {
        arr[i] = ans[i];
    }

    return arr;
}

/*
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.



For example:
'N' = 5.
The divisors of 5 are 1, 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
10
Sample Output 1 :
1 2 5 10
Explanation of Sample Input 1:
The divisors of 10 are 1,2,5,10.
Sample Input 2 :
6
Sample Output 2 :
1 2 3 6
Explanation of Sample Input 2:
The divisors of 6 are 1, 2, 3, and 6.
Constraints :
1 <= 'N' <= 10^5 

*/
