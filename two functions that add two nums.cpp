#include <iostream>
using namespace std;
int function1(int x,int y){
	return x+y;
}
double function2(double x,double y){
return x+y;
}
int main(){
	int n1=function1(2,4);
	double n2=function2(2.22,3.333);
	cout<<n1<<"\n";
	cout<<n2<<"\n";
	return 0;
	
}
