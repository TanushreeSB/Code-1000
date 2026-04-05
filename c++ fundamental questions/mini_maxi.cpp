#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	vector<int>arr(n);
	
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	
	int mini = INT_MAX;
	int maxi = INT_MIN;
	
	for(int i=0;i<n;i++){
	    if(arr[i] > maxi){
	        maxi = max(arr[i],maxi);
	    }
	    if(arr[i] < mini){
	        mini = min(arr[i],mini);
	    }
	}
	
	cout << mini << " " << maxi << endl;
	
    return 0;
}
