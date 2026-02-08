/* 
Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met.
A function that performs such self-calling behavior is known as a recursive function, and each instance of the function calling itself is called a recursive call. */

#include<iostream>
using namespace std;

unsigned int fact(unsigned int n){
    if(n == 0) // base case
        return 1;
    return n * fact(n - 1); // recursive case
    
}

int main(){
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    
    if(n < 0){
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    cout << "Factorial of a number is " << fact(n) << endl;
    
    return 0;
 }
