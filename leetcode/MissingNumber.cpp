int missingNumber(vector<int>& nums) {
    // Initialize 'missing' with the last index 'n'
    // Since the numbers are in the range [0, n], we include 'n' in the XOR process
    int missing = nums.size();

    // Loop through all indices and numbers
    for (int i = 0; i < nums.size(); ++i) {
        // Apply XOR: missing = missing ^ i ^ nums[i]
        // Why this works:
        // - XOR-ing a number with itself results in 0 (e.g., 3 ^ 3 = 0)
        // - XOR-ing a number with 0 results in the number itself (e.g., 0 ^ 3 = 3)
        // - So if we XOR all indices (0 to n) and all nums[i], all matched pairs cancel out
        // - The unmatched number (missing one) remains in 'missing'
        missing ^= i ^ nums[i];
    }

    // After the loop, 'missing' will hold the number that is missing from the array
    return missing;
}
