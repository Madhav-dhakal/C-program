#include<iostream>
using namespace std;
class myclass{
	public:
		int x;
		int y;
		int z;
		void getdata(int a,int b,int c){
			x=a;
			y=b;
			z=c;
		}
		void display(){
			cout<<x<<"\n";
			cout<<y<<"\n";
			cout<<z<<"\n";
		}
		void operator-(){
			x=-x;
			y=-y;
		}
		
};

int main(){
	myclass s;
	s.getdata(10,20,30);
	s.display();
	-s;
	s.display();

}
