int binarySearchDescending(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        // Reverse-sorted → larger values on left, smaller on right
        if (target < arr[mid]) {
            // Target is smaller → go right
            left = mid + 1;
        } 
        else {
            // Target is larger → go left
            right = mid - 1;
        }
    }

    return -1; // not found
}
