#include<iostream>
using namespace std;
class A {
	public:
		virtual void display()=0;
		void show(){
			cout<<"hello everybody"<<"\n";
		}
		
};

class B:public A {
	public:
		void display(){
			cout<<"radhe radhe ";
		}
		
};
int main(){
	B b;
	b.show();
	b.display();
	return 0; 
}
