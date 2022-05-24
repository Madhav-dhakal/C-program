#include <iostream>
#include <string>
using namespace std;

class MyClass { 
 public:
 	  int myNum; 
 	  string myString;
 };
 int main() {
  MyClass myObj;
  myObj.myNum =10;
  myObj.myString ="satish";
 cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  return 0;
}

