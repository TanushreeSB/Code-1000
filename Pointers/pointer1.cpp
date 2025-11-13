#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int* p = &i;

    cout << sizeof(p) << endl;
    cout << i << endl;
    cout << *p << endl;

    i++;

    cout << i << endl;
    cout << *p << endl;

    int a = *p;
    a++;
    cout << a << endl;
    cout << *p << endl;
}

/*

Output:
8
10
10
11
11

8
10
10
11
11
12
11

*/
