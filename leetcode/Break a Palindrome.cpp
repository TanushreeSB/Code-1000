class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();

        if(n == 1){
            return "";
        }

        for(int i = 0;i < n/2;i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n-1] = 'b';
        return palindrome;
    }
};

/*

Intuition

The string is a **palindrome**, and we need to make the smallest possible lexicographical string that is not a palindrome by changing exactly one character.
Since `'a'` is the smallest lexicographical character, we try to change the first non-'a' character in the first half to `'a'`. If all characters in the first half are `'a'`, we change the last character to `'b'`.

---

Approach

1. If the length of the palindrome is 1, it's impossible to make it non-palindromic with one change, so return an empty string.
2. Traverse only the **first half** of the string (because the second half mirrors it in a palindrome).
3. Find the **first non-'a'** character and replace it with `'a'`, then return the modified string immediately.
4. If all characters in the first half are `'a'`, change the **last character** to `'b'` (this breaks the palindrome while keeping the string lexicographically minimal).

---

Complexity

* Time complexity: O(n)
  We traverse at most half the string once.

* Space complexity: O(1)
  We're modifying the string in place (if allowed), with no extra space used.
*/
