#include<iostream>
#include<conio.h>
using namespace std;
//aga fxn ha ba yak name basha khode compiler az naww e data mifama k kodama da kodam fuction send kna .
void display(int x,int y)
{
	cout<<x<<"\t"<<y<<endl;
}
void display(float x,float y)
{
	cout<<x<<"\t"<<y<<endl;
}
void dispaly(char x,char y)
{
	cout<<x<<"\t"<<y<<endl;
}
void display(char x[], char y[])
{
	cout<<x<<"\t"<<y<<endl;
}

int main()
{
	display(10,20);
	display('a','z');
	display(10.23f,20.44f);
	display("edris","best asti");
	getch();
	
	
	
	
	
}

