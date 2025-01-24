class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        int j,key;
        
        for(int i=1;i<n;i++){
            j = i-1;
            key = arr[i];
        
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j = j - 1;
            } 
            arr[j+1] = key;
        }
    }
};

/*
Time Complexity of Insertion Sort: 
Best case: O(n), If the list is already sorted, where n is the number of elements in the list.
Average case: O(n2), If the list is randomly ordered
Worst case: O(n2), If the list is in reverse order

Space Complexity of Insertion Sort:
Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.
*/
