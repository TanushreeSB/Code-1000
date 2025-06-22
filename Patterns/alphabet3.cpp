#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
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
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 

*/
