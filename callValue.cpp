#include<iostream>
#include<conio.h>
using namespace std;
void swap(int* ,int * );

int main()
{
	int a,b;
	cout<<"enter two numbres: ";
	cin>>a>>b;
	cout<<"before calling swap() a="<<a<<"and b="<<b<<endl;
	swap(&a,&b);
	cout<<"after calling swap() a="<<a<<"and b="<<b<<endl;
	getch();
	
}
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}

