#include<iostream>
using namespace std;
class car{
	public:
		int speed( int maxspeed);
};
int car::speed(int maxspeed){
return maxspeed;
}
int main(){
	car myobj;
	int z;
	z=myobj.speed(100);
	cout<<z;
		return 0;
}
