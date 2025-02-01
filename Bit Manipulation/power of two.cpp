#include <iostream>
#include <string>

std::string isPowerOfTwo(int k) {
    if (k <= 0) {
        return "NO"; // Edge case: non-positive numbers cannot be powers of two
    }
    return (k & (k - 1)) == 0 ? "YES" : "NO";
}

int main() {
    int k;
    std::cout << "Enter a positive integer: ";
    std::cin >> k;

    std::string result = isPowerOfTwo(k);
    std::cout << result << std::endl;

    return 0;
}
