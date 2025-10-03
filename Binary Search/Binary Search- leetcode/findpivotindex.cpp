int total = accumulate(nums.begin(), nums.end(), 0);
int leftSum = 0;
for (int i = 0; i < nums.size(); i++) {
    if (leftSum == total - leftSum - nums[i]) return i;
    leftSum += nums[i];
}
return -1;


/*
Let’s walk through an example
nums = [1, 7, 3, 6, 5, 6]

Initialize:
total = 28
leftSum = 0

Loop:
i = 0:
leftSum == total - leftSum - nums[0]
0 == 28 - 0 - 1 → 0 == 27 ❌
leftSum += nums[0] → leftSum = 0 + 1 = 1

i = 1:
1 == 28 - 1 - 7 → 1 == 20 ❌
leftSum += nums[1] → 1 + 7 = 8

i = 2:
8 == 28 - 8 - 3 → 8 == 17 ❌
leftSum += nums[2] → 8 + 3 = 11

i = 3:
11 == 28 - 11 - 6 → 11 == 11 ✅
Return 3

✅ Summary of leftSum += nums[i];

It updates the sum of the left side after you're done checking the current index.

This way, at each step, leftSum is always the sum before index i, as required by the pivot condition.

*/
