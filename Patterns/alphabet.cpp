#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    
	for(int i=1;i<=n;i++){
	    char start = 'A' + n - i;
	    for(int j=1;j<=i;j++){
	        cout << start << " ";
	        start = start + 1;
	        
	    }
	    cout << endl;
	}
	
}

/*

Final Output:
4
D
C D
B C D
A B C D

Explanation:
Example:
If n = 4, here's how it works:

Row 1 (i=1):
start = 'A' + 4 - 1 = 'D'

Print: D

Row 2 (i=2):
start = 'A' + 4 - 2 = 'C'

Print: C D

Row 3 (i=3):
start = 'A' + 4 - 3 = 'B'

Print: B C D

Row 4 (i=4):
start = 'A' + 4 - 4 = 'A'

Print: A B C D

*/
