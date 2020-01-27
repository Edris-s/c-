#include<iostream>
#include<conio.h>
using namespace std;

class parent{
	protected:
		int a,b;
	public:
	void getddetails()
	{
		cout<<"enter two numbers :" ;
		cin>>a>>b;
	}
	
};

class child:public parent{
	int sum;
	public:
		void display()
		{
			sum=a+b;
			cout<<"sum is = "<<sum<<endl;
			
		}
};

int main()
{
	child c;
	c.getddetails();
	c.display();
	getch();
	
	
	
}
