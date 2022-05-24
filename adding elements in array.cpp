#include<iostream>
#include<string>
using namespace std;
int main(){
	string cars[5]={"tata","tesla","suzuki"};
	cars[3]={"volvo"};
	cars[4]={"bmw"};
	for(int i=0;i<5;i++)
	cout<<cars[i]<<"\n";
	return 0;
	 
}
