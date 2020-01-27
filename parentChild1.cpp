#include<iostream>
#include<conio.h>
using namespace std;

class parent1{
	protected: 
	int a,b;
	public:
		void getdetails()
		{
			cout<<"enter two numbers : " ;
			cin>>a>>b;
		}
};

class parent2{
	protected:
		int c,d;
		public:
			void getdetails()
			{
				cout<<"enter two other numbers : " ;
				cin>>c>>d;
			}
};

class child:public parent1,public parent2{
	int sum;
	public:
		void display()
		{
			sum=a+b+c+d;
			cout<<"sum of the given numbers is = "<<sum<<endl;
		}
};

int main()
{
	child c;
	c.parent1::getdetails();
	c.parent2::getdetails();
	c.display();
	getch();
}
