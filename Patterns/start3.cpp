#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++){
	    int space = n - i;
	    while(space){
	        cout << " ";
	        space = space - 1;
	    }
	    for(int j=1;j<=i;j++){
	        cout << "*";
	    }
	    cout << endl;
	}

}

/*
Sample Input
5
Your Output
    *
   **
  ***
 ****
*****

*/
