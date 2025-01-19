#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    // Calculate mid-point
    int mid = start + (end - start) / 2;

    // Loop until the search space is exhausted
    while (start <= end) {
        // If the key is found at mid
        if (arr[mid] == key) {
            return mid; // Return the index
        }

        // If key is greater, search in the right half
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        // If key is smaller, search in the left half
        else {
            end = mid - 1;
        }

        // Recalculate mid-point
        mid = start + (end - start) / 2;
    }

    // Key not found
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Key " << key << " found at index " << result << "." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
