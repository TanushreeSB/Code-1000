// Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.
// Floor value of any number is the greatest Integer which is less than or equal to that numberApproach 1: Use sqrt function to find square root
/*
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int ans = sqrt(n);
        return ans;
    }
};

*/

// Approach 2: Binary Search
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int start = 0, end = n;
        while(start <= end){
            long long mid = start + (end - start)/2;
            long long square = mid*mid;
            if(square <= (long long)(n)){
                start = mid + 1;
            }
            else{
                end = mid - 1 ;
            }
        }
        return end;
    }
};
