#include<iostream>
using namespace std;

unsigned int fact(unsigned int n){
    if(n == 0)
        return 1;
    return n * fact(n - 1);
    
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
