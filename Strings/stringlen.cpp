#include<iostream>
using namespace std;

int namelen(char name[]){
  int count = 0;
  for(int i = 0;name[i] != '\0';i++){
    count++;
  }
  return count;
}

int main(){
char name[20];

cout << "Enter the name: " << endl;
cin >> name;

cout << "Name is: " << name << endl;

cout << "Name Length  is: " << namelen(name);
return 0;
}

