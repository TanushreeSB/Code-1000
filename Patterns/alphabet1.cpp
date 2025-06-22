#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        char ch = ('A' + i - 1);
	        cout << ch << " ";
	        
	    }
	    cout << endl;
	}
	
}

/*

Sample Input
5
Your Output
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 

*/
