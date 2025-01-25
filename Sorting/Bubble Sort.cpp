class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-1-i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        
    }
};

/*

In the bubble sort algorithm, the purpose of the i and j loops is to systematically compare and swap elements in the array to 
"bubble" the largest unsorted value to its correct position in each pass.

### `i` Loop (Outer Loop):
- Purpose:
  The `i` loop tracks the number of passes or iterations needed to sort the array. Each pass ensures that the largest remaining unsorted element is moved to its correct position at the end of the array.
- **Number of Iterations:**  
  Runs for `(n-1)` iterations, where `n` is the size of the array. After `n-1` passes, the array is guaranteed to be sorted because there will be no more unsorted elements left.

### j Loop (Inner Loop):
- Purpose:  
  The j loop performs the actual comparison and swapping of adjacent elements. It iterates through the unsorted portion of the array during each pass to ensure the largest element is "bubbled" to the end.
- Number of Iterations per Pass:
  Runs for `(n-1-i)` iterations in each pass. The `-i` ensures that already sorted elements at the end of the array are not revisited.

---

### How it Works Together:

- In the first pass (`i = 0`), the largest element in the entire array is moved to its correct position at the end.
- In the second pass (`i = 1`), the second-largest element is moved to its correct position (one position before the last).
- This process continues until all elements are sorted.

### Visualization of the Sorting Process (Example: `{5, 1, 4, 2, 8}`)

Pass 1 (`i = 0`):
- Compare `5` and `1` → Swap → `{1, 5, 4, 2, 8}`
- Compare `5` and `4` → Swap → `{1, 4, 5, 2, 8}`
- Compare `5` and `2` → Swap → `{1, 4, 2, 5, 8}`
- Compare `5` and `8` → No swap → `{1, 4, 2, 5, 8}`

Pass 2 (`i = 1`):
- Compare `1` and `4` → No swap → `{1, 4, 2, 5, 8}`
- Compare `4` and `2` → Swap → `{1, 2, 4, 5, 8}`
- Compare `4` and `5` → No swap → `{1, 2, 4, 5, 8}`

Pass 3 (`i = 2`):
- Compare `1` and `2` → No swap → `{1, 2, 4, 5, 8}`
- Compare `2` and `4` → No swap → `{1, 2, 4, 5, 8}`

Pass 4 (`i = 3`):
- Compare `1` and `2` → No swap → `{1, 2, 4, 5, 8}`

At this point, the array is fully sorted, and no further passes are needed.


### Summary:
- The `i` loop ensures the algorithm progresses through multiple passes to sort all elements.
- The `j` loop ensures adjacent elements are compared and swapped, bubbling the largest unsorted element to the end in each pass.

*/
