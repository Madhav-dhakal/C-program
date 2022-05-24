#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z){
			brand=x;
			model=y;
			year=z;
			cout<<"brand is:"<<brand<<"\n";
			cout<<"model is:"<<model<<"\n";
			cout<<"year is:"<<year<<"\n";
		}
};
int main(){
	car obj1("BMW","x5",1999);
	return 0;
}
