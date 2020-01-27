#include<iostream>
#include<conio.h>
using namespace std;
class add{
	static int a,b,sum;
	public:
		static void getdetails()
		{
			cout<<"enter two numbers: ";
			cin>>a>>b;
			sum=a+b;
		}
		static void display()
		{
			cout<<a<<"+"<<b<<"="<<sum<<endl;
		}
		
};

int add::a=0;
int add::b=0;
int add::sum=0;

int main()
{
	add x,y;
	x.getdetails();
	y.getdetails();
	x.display();
	y.display();
	getch();	
}
