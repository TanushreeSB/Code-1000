#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int totalPrime(int S, int E) {
    int count = 0;
    for (int i = S; i <= E; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}

/*
Write a program to find the total number of a primes number in a given interval.

Given two integers S and E, count all primes between S and E.

Detailed explanation ( Input/output format, Notes, Images )
Constraints
1 <= N <= 100
*/
