#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	public: 
	sample()
	{
		cout<<"i am in constrancting class "<<endl;
		
	}
	void display()
	{
		cout<<"i am in display class "<<endl;
	}
	~sample()
	{
		cout<<"i am in destructing class "<<endl;
	}
};
void show()
{
	cout<<"i am in show function "<<endl;
	sample s;
	cout<<"back to show "<<endl;
	
}
int main()
{
	cout<<"i am in main function "<<endl;
	show();
	cout<<"back to the main "<<endl;
	getch();
}
