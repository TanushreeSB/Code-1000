#include<iostream>
using namespace std;

unsigned int fact(unsigned int n){
    if(n == 0)
        return 1;
    
    unsigned int ans = 1;
    for(int i=2;i<=n;i++){
        ans = ans * i;
    }
    return ans;
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
