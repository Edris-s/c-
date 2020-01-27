#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;
	cout<<"enter your number of element :";
	cin>>num;
	
	int *p = new int[num];
	cout<<"enter "<<num<<"element "<<endl;
	for(int i=0;i<num;i++)
	cin>>*(p+i);
	
	
	cout<<"array elements are : "<<endl;
		for(int i=0;i<num;i++)
	cout<<*(p+i)<<" ";
	delete[]p;
	getch();
	
	
	
}
