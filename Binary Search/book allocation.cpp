#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


/* The isPossible function is part of the Book Allocation Problem, which is commonly solved using binary search. This function checks whether it is possible to allocate books (represented by the arr array) to m students such that the maximum number of pages allocated to a student does not exceed a given value mid. Here's a detailed explanation:

Parameters:
vector<int> arr: An array where each element represents the number of pages in a book.
int n: The number of books (arr.size()).
int m: The number of students.
int mid: The maximum number of pages a single student is allowed to read (hypothetical value to check).
Algorithm:
Initialization:

studentCount = 1: Initially, one student is assigned.
pageSum = 0: Tracks the sum of pages allocated to the current student.
Iterating Through Books:

For each book (arr[i]):
If adding the current book's pages to pageSum keeps it less than or equal to mid:
Add the pages to the current student’s allocation: pageSum += arr[i].
Otherwise:
Allocate the current book to the next student:
Increment the student count: studentCount++.
Check if the current student count exceeds the allowed number of students (m) or if the current book has more pages than mid (this means it's impossible to allocate the book under the given conditions). If true, return false.
Reset pageSum to the current book's pages: pageSum = arr[i].
Final Check:

If studentCount > m at any point, it means the allocation isn't possible for the given mid.
Return:

If the function completes without exceeding m students, return true.
Key Points:
Allocation Logic:
A student's total allocated pages should not exceed mid.
If a book itself has more pages than mid, the allocation is deemed impossible (arr[i] > mid).
Binary Search Context:
This function is typically used as part of binary search to determine the minimum possible value of mid that allows allocation.*/
