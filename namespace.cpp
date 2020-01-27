#include<iostream>
#include<conio.h>
using namespace std;

int a=20;//global variable 
void display();

namespace N1
{
	int a=30; 
}
namespace N2
{
	int a=40;
	
}
namespace N3
{
	int a=50;
}



int main()
{
	cout<<"i am in the main function"<<endl;
	int a=10;//local variable 
	cout<<a<<endl;
	cout<<::a<<endl;
	cout<<N1::a<<endl;
	cout<<N2::a<<endl;
	cout<<N3::a<<endl;
	display();
	getch();
	
}
void display()
{
	cout<<"int display function"<<endl;
	cout<<a<<endl;
	cout<<::a<<endl;
	cout<<N1::a<<endl;
	cout<<N2::a<<endl;
	cout<<N3::a<<endl;
	
}
// it means by using diff. namespaces we can one variable many times from diff namespaces 
// but max two times : global and local using :: and name of space name .




