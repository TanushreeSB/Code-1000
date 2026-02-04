#include<iostream>
using namespace std;

int main () {

    //int arr[10] = {23, 122, 41, 67};

   /*
    cout <<" address of first memory block is " << arr << endl; // 0x7ffe3d32a270
    cout << arr[0] << endl; // 23
    cout <<" address of first memory block is " << &arr[0] << endl; // 0x7ffe3d32a270

    cout << "4th " << *arr << endl; // 23
    cout << "5th " << *arr + 1 << endl; // 24
    cout << "6th " << *(arr + 1) << endl; // 122
    cout << "7th " << *(arr) + 1 << endl; // 24
    cout << "8th " << arr[2] << endl; // 41
    cout << "9th " << *(arr+2) << endl; // 41

    int i = 3;
    cout << i[arr] << endl; // 67

    int temp[10] = {1,2};
    cout << sizeof(temp) << endl; // 40
    cout << " 1st " <<  sizeof(*temp) << endl; // 4
    cout << " 2nd " <<  sizeof(&temp) << endl; // 8

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl ; // 8
    cout << sizeof(*ptr) << endl ; // 4
    cout << sizeof(&ptr) << endl ; // 8
*/

    int a[20] = {1,2,3,5};
   //cout << " ->" << &a[0] << endl; //0x7ffcbb9b98d0
  // cout << &a << endl; // 0x7ffcbb9b98d0
   //cout << a << endl; // 0x7ffcbb9b98d0

  int *p = &a[0];
  // cout << p << endl; // 0x7ffd9d530480
  // cout << *p << endl; // 1
  // cout << "-> " << &p << endl; //  0x7ffd9d530478

  //   int arr[10];

//ERROR
   //arr = arr+1;

  //  int *ptr = &arr[0];
    //cout << ptr << endl; // 0x7fffd522ef10
  //  ptr = ptr + 1;
  //  cout << ptr << endl; // 0x7fffd522ef14

    return  0;
}



