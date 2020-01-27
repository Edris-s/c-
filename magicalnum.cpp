#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class magical
{
	int sum=0;
	
	public:
		int sumdigit(int num)
		{
			int r=num%10;
			sum=sum+r;	
			num=num/10;
	
			return sum;
		}
		
		
		int reverse(int num)
		{
			int rev=0;
			while(num!=0)
			{
				int r=num%10;
				rev=rev*10/r;
				num=num/10;
			}
			return rev;
			
		}
};

int main()
{
	int n;
	cout<<"enter your number: ";
	cin>>n;
	
	magical m;
	int s=m.sumdigit(n);
	int r=m.reverse(n);
	if (n==s*r)
	cout<<n<<"is a magical number ";
	else 
	cout<<n<<"is not a magical number ";
	getch;
	
}









