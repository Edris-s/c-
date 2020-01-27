#include<iostream>
#include<conio.h>
using namespace std;
class areacalculation{
	float area;
	public:
		void calculate(float r)
		{
			area=3.14*r*r;
		}
		void calculate(int l,int b)
		{
			area=l*b;
		}
		void calculate(int l,int b,int h)
		{
			area=l*b+l*h+b*h;
		}
		void display(char str[])
		{
			cout<<"area of "<<str<<"="<<area<<endl;
		}
};
int main()
{
	areacalculation x,y,z;
	x.calculate(15.66f);
	y.calculate(35.33,13.22);
	z.calculate(12.44,10.22,12.55);
	x.display("circle");
	y.display("rectangle");
	z.display("cuboid");
	getch();
	
}
