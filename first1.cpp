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
			cout<<"---------->>>sallery slip<<<-------"<<endl;
		    cout<<"employee id          :            "<<id<<endl;
		    cout<<"name                 :           "<<name<<endl; 
		    cout<<"designation          :           "<<dsg<<endl;
		    cout<<"basic sallery        :           "<<basic<<endl; 
		    cout<<"------------------------------------"<<endl;
		    cout<<"total leave          :           "<<l<<endl;
		    cout<<"leave amount         :           "<<lamount<<endl; 
		    cout<<"------------------------------------"<<endl;
		    cout<<"ta\tda\thra\tma"<<endl; 
		    cout<<ta<<"\t"<<da<<"\t"<<hra<<"\t"<<ma<<"\t"<<endl;
		    cout<<"------------------------------------"<<endl;
		    cout<<"gross sallery        :           "<<gross<<endl; 
		    cout<<"income tax           :           "<<itax<<endl; 
		    cout<<"net sallery          :           "<<net<<endl; 
		    cout<<"------------------------------------"<<endl;  
		}
		
};
int main()
{
	employee e;
	e.details();
	e.calculation();
	e.display();
	getch;
}





















