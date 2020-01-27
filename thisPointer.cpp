#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	int a,b;
	public:
		void getdetails1(int a, sample *p)
		{
			p->a=a;
			
		}
		void getdetails2(int b)
		{
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
			
		}
};

int main()
{
	sample s;
	s.getdetails1(100,&s);
	s.getdetails2(200);
	s.display();
	getch();
	
}
