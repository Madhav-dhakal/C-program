#include<iostream>
using namespace std;
class Car{
	public:
	string brand;
	string model;
	int year;
	Car(string x,string y,int z){
		brand =x;
		model=y;
		year=z;
			}
};
int main(){
	Car carmyobj("bmw","mustang",2000);
	
	cout<<carmyobj.brand<< " " <<carmyobj.model<< " " <<carmyobj.year;
	return 0;
}
