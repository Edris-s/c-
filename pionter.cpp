#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	cout<<"enter the number of elements : ";
	cin>>num;
	
	int *p= new int[num];
	
	cout<<"enter "<<num<<"elements "<<endl;
	for(int i=0;i<num;i++)
	cin>>*(p+i);
	cout<<"array of elements are : "<<endl;
	for(int i=0;i<num;i++)
	cout<<*(p+i)<<" ";
	delete[] p;
	getch();
	
}
