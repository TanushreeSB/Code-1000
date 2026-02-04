#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl;  // 5

}

void update(int *p) {

   // p = p + 1;
   //cout << "inside "<< p <<endl;
   *p = *p + 1;

}

int getSum(int *arr, int n) { // int *arr means the function is working directly with the memory address of the array’s first element, and array indexing is just pointer arithmetic.i.e here *arr same as arr[]

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
/*
    int value = 5;
    int *p = &value;

    //print(p);
    cout <<" Before " << *p << endl; 
    update(p);
    cout <<" After " << *p << endl; value updates
    */

    int arr[6] = {1,2,3,4,5,8};

    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

    return 0;
}

/*
Your Output
0x7fff2701adc0
abcde
abcde
zabcde
/

