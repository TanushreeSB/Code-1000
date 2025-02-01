class Solution {
public:
    string toLowerCase(string s) {
        for(char&c : s){
            c = tolower(c);
        }
        return s;
    }
};

/*
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"

*/
