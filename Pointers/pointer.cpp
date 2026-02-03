#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<" address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl; // 5

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl; // 4.3

    cout << " size of integer is " << sizeof(num) << endl; // 4
    cout << " size of pointer is " << sizeof(ptr) << endl; //  8
    cout << " size of pointer is " << sizeof(p2) << endl; // 8

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    /*
    int i = 5;

    int *q = &i;
    cout << q << endl; 
    cout << *q << endl; output:5

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl; output:5
    */

    return 0;
}
