class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(target < letters[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return letters[start % letters.size()];
    }
};

/*

Why start % letters.size()?
Let’s say:

After binary search, start points to the first character that is greater than target.

But what if all characters are less than or equal to target?

In that case, start == letters.size() (i.e., we go past the last index).

So we do start % letters.size() to wrap around to index 0 and return the first letter.

*/
