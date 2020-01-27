#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class employee
{
	int id,basic,ta,da,hra,ma,gross,itax,l,lamount,net;
	char name[20],dsg[20];
	
	public:
		
		void  details()
		{
			cout<<"enter your id: ";
			cin>>id;
			cout<<"enter your name: ";
			fflush(stdin);
			cin.get(name,20);
			cout<<"enter your designation: ";
			fflush(stdin);
			cin.get(dsg,20);
			cout<<"enter total off days: ";
			cin>>l;
			cout<<"enter the employee sallery: ";
			cin>>basic;
		}
		
		void calculation()
		{
			if(basic<=10000)
			{
				ta=basic*5/100;
				da=basic*6/100;
				hra=basic*7/100;
				ma= 2500;
			}
			
			else
			{
				ta=basic*7/100;
				da=basic*9/100;
				hra=basic*12/100;
				ma= 4500;	
			}
			
			gross= basic-ta-da-hra-ma;
			if(basic<=20000)
			itax=0;
			else
			itax=(basic-20000)*5/100;
			lamount=(basic/30)*l;
			net = gross-itax-lamount;
			
		}
		
		void display()
		{
			cout<<"----------------------------------------------------------------------------------------";
			cout<<id<<"\t"<<name<<"\t"<<dsg<<"\t"<<basic<<"\t"<<gross<<"\t"<<net<<"\t"<<itax<<"\t"<<lamount<<endl;
			cout<<"----------------------------------------------------------------------------------------";
		}
		
};
int main()
{
	int num;
	cout<<"enter the number of employee: ";
	cin>>num;
	cout<<"enter details of this "<<num<< "employee : "<<endl;
	
	employee e[num];
	for(int i=0;i<num;i++)
	{
		cout<<"enter the details of employee number "<<i+1<<endl;
		e[i].details();
		e[i].calculation();
		
	}
	
	cout<<"id\tname\tdsg\tbasic\tgross\tnet\titax\tleave amount "<<endl;
		for(int i=0;i<num;i++)
		e[i].display();
	getch;
}





















