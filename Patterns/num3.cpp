#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        cout << n-j+1;
	    }
	    cout << endl;
	}
	
}

/*
Sample Input
5
Your Output
54321
54321
54321
54321
54321

*/
