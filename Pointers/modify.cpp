#include<iostream>
using namespace std;

int main () {

   int num = 5;
   int a = num;
   cout << "a before " << num << endl; //5
   a++;
   cout << "a after " << num << endl; //5


   int *p  = &num;
   cout << "before " << num << endl; //5
   (*p)++;
   cout << "after " << num << endl; //6

    //copying a pointer
   int *q = p; // imp
   cout << p <<" - " << q << endl; 
   cout << *p <<" - " << *q << endl; // 6 6

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl; // 4
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl; // 0x7ffe9fee3a7c
    t = t + 1;
    cout << " after t " << t << endl; // 0x7ffe9fee3a80


    return 0;
}
