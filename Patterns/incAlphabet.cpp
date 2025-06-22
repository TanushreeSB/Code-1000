#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
    char start = 'A';
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        cout << start << " ";
	        start = start + 1;
	        
	    }
	    cout << endl;
	}
	
}

/*
Sample Input
5
Your Output
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 

*/
