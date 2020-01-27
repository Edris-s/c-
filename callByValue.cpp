#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a=10,&s=a,*p;
	p=&a;
	
	cout<<a<<endl;
		cout<<s<<endl;
			cout<<*p<<endl;
			
			
			
				cout<<&a<<endl;
					cout<<&s<<endl;
						cout<<p<<endl;
						
						
							cout<<&p<<endl;
	getch();
}
