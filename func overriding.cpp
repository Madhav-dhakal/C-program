#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<"hello world";
		}
};
class dog:public animal{
	public:
	void eat(){
		cout<<"eating mangoes";
	}
};
int main(){
	dog d;
	d.eat();
	return 0;
}
