#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	for(int i=0;i<s.size();i++){
	    s[i] = toupper(s[i]);
	}
	
	cout << s;
	return 0;
}

---------

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	for(int i=0;i<s.size();i++){
	    if(s[i] >= 'a' && s[i] <= 'z'){
	        s[i] = s[i] - ('a' - 'A');
	    }
	}
	
	cout << s;
	return 0;
}
