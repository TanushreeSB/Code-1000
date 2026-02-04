#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr << endl; // 0x7fff2701adc0
    //attention here
    cout << ch << endl; // abcde
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl; // abcde

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; // zabcde


    return 0;
}
