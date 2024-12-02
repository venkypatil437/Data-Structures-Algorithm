#include<iostream>
using namespace std;
class circle
{
	
	float ar,cir;
	float pi = 3.14;
	public:
	int area(int r)
	{
		ar= pi*r*r;
		return 0;
	}
	int circum(int r)
	{
		cir= 2*pi*r;
		return 0;
	}
	void display(){
		cout<<" The area of circle is"<<ar;
		cout<<"the circumference of circle is"<<cir;
	}
};
int main()
{
	circle c1;
	c1.area(2);
	c1.circum(2);
	c1.display();
}