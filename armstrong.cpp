#include<iostream>
#include<conio.h>

using namespace std;

class armstrong
{
	int num;
	public:
		
	int calculate(int num)
	{
		int sum=0;
		while(num!=0)
		{
			int r=num%10;
			int p=r*r*r;
			num=num/10;
				sum=sum+p;
		
			
		}
		return sum;
	}
};
int main()
{
	int n;
	cout<<"enter your number: ";
	cin>>n;
	
	armstrong a;
	int s= a.calculate(n);
	if(n==s)
	cout<<"its an aramstong number ";
	else 
	cout<<"its not an armstrong number";
	getch();
	
}
