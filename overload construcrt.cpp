#include<iostream>
using namespace std;
class abc{
	public:
		int x,y;
	//	int x1,y1;
		abc(){
			x=y=0;
		//	cout<<"x="<<x<<"\n";
		//	cout<<"y="<<y<<"\n";
		}
		abc(int a){
			x=y=a;
		//	cout<<"x1="<<x1<<"\n";
		//	cout<<"y1="<<y1<<"\n";
		}
		void display(){
			cout<<"x="<<x<<"\n";
			cout<<"y="<<y<<"\n";
		}
};

int main(){
	abc p;
	abc q(10);
	p.display();
	q.display();
}
