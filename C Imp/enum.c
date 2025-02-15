#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
} 

/*
Enumeration (or enum) is a user defined data type in C.
It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.
Interesting facts about initialization of enum. 
1. Two enum names can have same value.
2. If we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0. 
3. We can assign values to some name in any order. All unassigned names get value as value of previous name plus one. 
4. The value assigned to enum names must be some integral constant, i.e., the value must be in range from minimum possible integer value to maximum possible integer value.
5. All enum constants must be unique in their scope. For example, the following program fails in compilation. 
Eg:
enum state  {working, failed};
enum result {failed, passed};

int main()  { return 0; }
Output: 

Compile Error: 'failed' has a previous declaration as 'state failed'
*/
