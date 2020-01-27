#include<iostream>
#include<conio.h>
using namespace std;
class bike{
	protected:
		char name[20],color[20];
		int price ,cc,speed;
		public:
			void getdetails()
			{
				cout<<"enter the name and color: ";
				fflush(stdin);
				cin.get(name,20);
				fflush(stdin);
				cin.get(color,20);
				cout<<"enter the price ,cc and speed : "<<endl;
				cin>>price>>cc>>speed;
			}
			void display()
			{
				cout<<name<<"\t"<<color<<"\t"<<speed<<"\t"<<cc<<"\t"<<price<<endl;
				
			}
};
class honda:public bike{
	public:
		honda()
		{
		
			cout<<"enter honda bike details: "<<endl;
		}
};
class hero:public bike{
	public:
	hero()
	{
		cout<<"enter the hero bike details "<<endl;
	}
};

class bajaj:public bike{
	public:
		bajaj()
		{
			cout<<"enter the bajaj bike details "<<endl;
		}
};
class yamaha:public bike{
	public:
	yamaha()
	{
		cout<<"enter the yahama bike details "<<endl;
	}
};


int main()
{
	honda a;
	a.getdetails();
	
	hero b;
	b.getdetails();
	
	bajaj c;
	c.getdetails();
	
	yamaha d;
	d.getdetails();
	
	cout<<"name\tcolor\tspeed\tcc\tprice\t"<<endl;

	a.display();
	b.display();
	c.display();
	d.display();
	getch();
}
