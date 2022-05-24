#include<iostream>
using namespace std;
class A{
	public:
		virtual void display()=0;
			//cout<<"hello world";(for pure virtual func we skip cout step in base class)
	
		};
		class B:public A  {
			public:
				void display(){
					cout<<"smile";
				}
			
		};

int main(){
	B b;
	A *a;
	a=&b;
	a->display();
	return 0;
}
