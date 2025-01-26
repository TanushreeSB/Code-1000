
class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str) {
        vector<int> hash(26, 0);

        // using hash table to store count of each character.
        for (auto i : str)
            hash[i - 'a']++;
        int maxi = 0;
        char ch;

        // iterating over the hash table.
        for (int i = 0; i < 26; i++) {
            // we keep storing the maximum value in hash
            // table and its corresponding character.
            if (hash[i] > maxi) {
                maxi = hash[i];
                ch = i + 'a';
            }
        }
        // returning the character with maximum occurrences.
        return ch;
    }
};


/*

Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

Examples:

Input: s = "testsample"
Output: 'e'
Explanation: e is the character which is having the highest frequency.
Input: s = "output"
Output: 't'
Explanation:  t and u are the characters with the same frequency, but t is lexicographically smaller.
Constraints:
1 ≤ |s| ≤ 100

*/
