#include<iostream>
using namespace std;

// Both functions return a reference/pointer to a local stack variable that gets destroyed after the function ends, creating a dangling reference/pointer (undefined behavior).
/*
return ans;	Returning reference to dead local variable	Dangling reference
return ptr;	Returning pointer to dead local variable	Dangling pointer
*/
int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int main() {

    /*
    int i = 5;

    //create a ref variable 

    int& j = i;

    cout << i << endl; 5
    i++; 
    cout << i << endl; 6
    j++;
    cout << i << endl; 7
    cout << j << endl; 7
    */

   int n = 5;
   
   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;


    fun(n); //errors

    return 0;
}
