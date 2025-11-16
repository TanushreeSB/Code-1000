int orderAgnosticBinarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    // Detect order of array
    bool isAscending = arr[left] < arr[right];

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        // If array is ascending
        if (isAscending) {
            if (target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // If array is descending
        else {
            if (target > arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
    }

    return -1; // Not found
}
