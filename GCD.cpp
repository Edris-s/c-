#include<iostream>
#include<conio.h>
using namespace std;

class edris{
	int first,second;
	public:
		void input()
		{
			cout<<"enter your two inputs :"<<endl;
			cin>>first>>second;
			
		}
		void GCD()
		{
			int max,ker ;
			max=first>second?first:second;
			for (int i=1;i<=max;i++)
			{
				if(first%i==0 && second%i==0)
				{
					ker=i;
				}
				
			}
			cout<<"the GCD is ="<<ker<<endl;
		}
		
		void LCM()
		{
			int  min;
			min=first>second?first:second;
			
			while(1)
			{
				if (min%first==0 && min %second==0)
				{
				cout<<"Least common multiple is ="<<min<<endl;
				break;
			}
				min++;
			}
			
		}
};
int main()
{
	edris s;
	s.input();
	s.GCD();
	s.LCM();
	getch();
}
