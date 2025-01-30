int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

/*
Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
 After completion of the loop return i+1, i.e size of the array of unique elements.

 Initialization:

i = 0 initializes the first index of the array. It will keep track of the position where the next unique element should be placed.
Iterate over the array:

The for loop starts from j = 1 and goes to n-1. This loop checks each element of the array against the element at index i.
Check for duplicates:

Inside the loop, the condition if (arr[i] != arr[j]) checks if the element at arr[j] is different from the element at arr[i].
If the elements are different, it means arr[j] is a unique element that hasn’t been seen yet, so it needs to be added 
to the array of unique elements.
Update the array:

When a unique element is found, i++ increments the position of the unique element index, and arr[i] = arr[j] places the new unique element 
at the next available position in the array.


Final Result:

After the loop finishes, i + 1 is returned, which represents the new length of the array without duplicates (because i is zero-indexed
, and we want to count the number of unique elements).
*/
