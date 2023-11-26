#include<iostream>
using namespace std;
struct point{
	int x,y;	
};
int main(){	
	struct point p1,p2,p3;
	cout<<"Nitesh Kumar"<<endl;cout<<"2822106"<<endl;
	cout<<"Enter the x coordiante for P1 : ";
	cin>>p1.x;
	cout<<"Enter the y coordiante for P1 : ";
	cin>>p1.y;
	cout<<"Enter the x coordiante for P2 : ";
	cin>>p2.x;
	cout<<"Enter the y coordiante for P2 : ";
	cin>>p2.y;
	p3.x=p1.x+p2.x; p3.y=p1.y+p2.y;
	cout<<"Coordiante for P1 + P2 are : "<<p3.x<<"\t"<<p3.y;	
	return 0;	
}
