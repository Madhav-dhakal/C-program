#include<iostream>
using namespace std;
inline float area(float l,float b){
	return l*b;
}
int main(){
	int n;
	float l,b,Area;
	Area=area(3,4);
	cout<<"area="<<Area;
}
