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
			cout<<"in class : "<<this<<endl;
			
		}
};

int main()
{
	sample s[5];
	for(int i=0;i<5;i++)
	{
		cout<<"outside class : "<<&s[i]<<endl;
		s[i].display();
	}
	//s.getdetails1(100,&s);
	//s.getdetails2(200);
	
	getch();
	
}
