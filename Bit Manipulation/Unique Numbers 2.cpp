lass Solution {
  public:
    vector<int> singleNumber(vector<int>& arr) {
        // Code here.
        // Step 1: XOR all numbers together to get the combined XOR result
        int combinedXOR = 0;
        for (int i = 0; i < arr.size(); i++) {
            combinedXOR ^= arr[i];  // XOR all elements
        }

        // Step 2: Find the rightmost set bit (this will be the bit where the two non-repeating numbers differ)
        int rightmostBit = combinedXOR & -combinedXOR;

        // Step 3: Divide the numbers into two groups based on the rightmost set bit and XOR them separately
        vector<int> nonRepeatingNumbers = {0, 0};  // This will store the two non-repeating numbers
        
        for (int i = 0; i < arr.size(); i++) {
            if ((arr[i] & rightmostBit) == 0) {
                nonRepeatingNumbers[0] ^= arr[i];  // XOR the numbers where the bit is 0
            } else {
                nonRepeatingNumbers[1] ^= arr[i];  // XOR the numbers where the bit is 1
            }
        }

        // Step 4: Ensure the smaller number is in the first position
        if (nonRepeatingNumbers[0] > nonRepeatingNumbers[1]) {
            swap(nonRepeatingNumbers[0], nonRepeatingNumbers[1]);
        }

        return nonRepeatingNumbers;
    }
};

/*

Find the two non-repeating elements in an array of repeating elements
Given an array arr[] containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas 
the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.

Example:

Input: N = 2, arr[] = {1, 2, 3, 2, 1, 4}
Output:3 4 
Explanation: 3 and 4 occur exactly once.



Input: N = 1, arr[] = {2, 1, 3, 2}
Output: 1 3
Explanation: 1 3 occur exactly once.
*/
