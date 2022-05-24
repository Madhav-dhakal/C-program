#include<iostream>
#include<string>
using namespace std;
int main(){
	string food="pizza";
	string*ptr=&food;
	cout<<*ptr;
}
