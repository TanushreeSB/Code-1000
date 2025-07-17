class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        for(int i=0;i<letters.size();i++){
            if(letters[i] > target){
                ans = letters[i];
                break;
            }
        }
        return ans;
    }
};

/*

Initialize the answer as the first character.

Loop through each character in the letters vector.

If the current character is greater than the target, it qualifies as the answer. Since the array is sorted, the first such character is the required result.

If no such character is found in the loop, the array wraps around — so return the first character.

Complexity
Time complexity:
O(n);

Space complexity:
O(1);

*/
