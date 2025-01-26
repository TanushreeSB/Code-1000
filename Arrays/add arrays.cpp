vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1,j=m-1;
	vector<int>ans;
	int carry = 0;
	while(i>=0 && j>=0){
		int value1 = a[i];
		int value2 = b[j];

		int sum = value1 + value2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;

	}

	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
		
	}

	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		
	}

	while(carry != 0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	
	return reverse(ans);

}
