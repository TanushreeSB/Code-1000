class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long dvd = llabs(dividend);
        long long dvs = llabs(divisor);

        long long result = 0;

        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;

            while ((temp << 1) <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        return negative ? -result : result;
    }
};
