#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	int a,b;
	public:
		void getdetails1()
		{
			cout<<"enter two  numbers : ";
			cin>>a>>b;
			
		}
	
		friend void display(sample *p);
		
};
void display(sample *p) //independent function but friend of sample class
{
	cout<<"a="<<p->a<<"and b= "<<p->b<<endl;
}

int main()
{
	sample s;
	s.getdetails1();
	display(&s);
	getch();
	
}
