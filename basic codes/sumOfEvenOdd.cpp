#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sumEven = 0, sumOdd = 0;

    if (N < 0) N = -N; 

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 == 0)
            sumEven += digit;
        else
            sumOdd += digit;
        N = N / 10;
    }

    cout << sumEven << " " << sumOdd << endl;
    return 0;
}
