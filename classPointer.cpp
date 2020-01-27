#include<iostream>
#include<conio.h>

using namespace std;

class sample{
	public:
		sample()
		{
			cout<<"constracting() "<<endl;
		}
		void display()
		{
			cout<<"display() "<<endl;
		}
		~sample()
		{
			cout<<"distructor() "<<endl;
		}
};

int main()
{
	sample *p=new sample;
	p->display();
	delete p;
	cout<<"back to main "<<endl;
	getch();
	
	
	
}
