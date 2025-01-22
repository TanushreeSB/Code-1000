class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int UniqueNumber = 0;
        for(int bitposition = 0;bitposition<32;bitposition++){
            int bitcount = 0;
            
            for(int i=0;i<N;i++){
                if(arr[i]&1){
                    bitcount++;
                }
                arr[i] = arr[i] >>1;
            }
            
            if(bitcount % 3 != 0){
                UniqueNumber |= (1<<bitposition);
            }
        }
        return UniqueNumber;
    }
};

/*
Given an array where every element occurs three times, except one element which occurs only once. Find the element that occurs once.

Note: Expected time complexity is O(n) and O(1) extra space.

Examples:

Input: arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 3} 
Output: 2 
In the given array all element appear three times except 2 which appears once.


Input: arr[] = {10, 20, 10, 30, 10, 30, 30} 
Output: 20 
In the given array all element appear three times except 20 which appears once. 


Input: arr[] = {10} 
Output: 10 
*/
