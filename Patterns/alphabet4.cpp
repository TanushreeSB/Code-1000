#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        char ch = 'A' + i + j - 2;
	        cout << ch << " ";
	        
	    }
	    cout << endl;
	}
	
}

/*
Sample Input
5
Your Output
A 
B C 
C D E 
D E F G 
E F G H I 

*/
