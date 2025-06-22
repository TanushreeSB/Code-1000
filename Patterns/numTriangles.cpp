#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
    int count = 1;
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        cout << count << " ";
	        count = count + 1;
	        
	    }
	    cout << endl;
	}
	
}

/*
Sample Input
5
Your Output
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/


*************************************************************************************************************************************************


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
    int count = 1;
	
	for(int i=1;i<=n;i++){
	    int val = i;
	    for(int j=1;j<=i;j++){
	        cout << val << " ";
	        val = val + 1;
	        
	    }
	    cout << endl;
	}
	
}

/*
Sample Input
5
Your Output
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 

*/
