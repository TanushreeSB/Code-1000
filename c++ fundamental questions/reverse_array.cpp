#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[5];
	for(int i=0;i<5;i++){
	    cin >> arr[i];
	}
	
	cout << "Reversed array: " << endl;
	for(int i=4;i>=0;i--){
	    cout << arr[i] << " ";
	}

}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    while(left < right) {
        int temp = arr[left]; 
        arr[left] = arr[right];
        arr[right] = temp;
// or can use swap(arr[left],arr[right]
        left++;
        right--;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
