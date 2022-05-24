#include<iostream>
using namespace std;
void swapnum(int &x,int &y){
	int z=x;
	x=y;
	y=z;
}
int main(){
int n1=10;
int n2=20;
cout<<"before swap"<<"\n";
cout<<n1<<"\n";
cout<<n2<<"\n";

swapnum(n1,n2);
cout<<"after swap"<<"\n";
cout<<n1<<"\n";
cout<<n2<<"\n";
return 0;
}
