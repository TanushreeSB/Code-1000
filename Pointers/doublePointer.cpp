#include <bits/stdc++.h>
using namespace std;

int main()
{
  int variable = 169;
  
  // Pointer to store the address of variable
  int* pointer1;

  // double pointer to store the address of pointer1
  int** pointer2;

  // Storing address of variable in pointer1
  pointer1 = &variable;

  // Storing address of pointer1 in pointer2
  pointer2 = &pointer1;

  cout << "Value of variable :- " << 
           variable << "\n";
  cout << "Value of variable using single pointer :- " << 
           *pointer1 << "\n";
  cout << "Value of variable using double pointer :- " << 
           **pointer2 << "\n";
  return 0;
}

/*

output:
Value of variable :- 169
Value of variable using single pointer :- 169
Value of variable using double pointer :- 169

*/
