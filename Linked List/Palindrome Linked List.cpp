#include<vector>
class Solution {
  
  private:
  
    bool checkPalindrome(vector<int>arr){
        int n = arr.size();
        int s = 0;
        int e = n-1;
        
        while(s <= e){
            
            if(arr[s] != arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
    
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int>arr;
        
        Node *temp = head;
        while(temp != NULL){
            arr.push_back(temp -> data);
            temp = temp -> next;
        }
        return checkPalindrome(arr);
    }
};


/*

Given a head singly linked list of positive integers. The task is to check if the given linked list is palindrome or not.

Examples:

Input: head: 1 -> 2 -> 1 -> 1 -> 2 -> 1
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1 , which is a palindrome and Hence, the output is true.

*/
