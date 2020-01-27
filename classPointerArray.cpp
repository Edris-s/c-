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
	int num;
	cout<<"enter the number of objects : ";
	cin>>num;
	
	sample *p=new sample[num];
	for(int i=0;i<num;i++)
	(p+i)->display();
	p->display();
	
	delete[] p;
	cout<<"back to main "<<endl;
	getch();
	
	
	
}
