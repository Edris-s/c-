#include<iostream>
#include<conio.h>
using namespace std;

class parent{
	protected:
		int a[20],num;
		public:
			void getdetails()
			{
				while(1)
				{
					cout<<"enter of elements less than 20 : ";
					cin>>num;
					if(num<=0  || num>20)
					cout<<"invalid choice "<<endl;
					else
					break;
				}
				cout<<"enter the "<<num<<"elements "<<endl;
				for(int i=0;i<num;i++)
				cin>>a[i];
			}
};

class child1:public parent{

	public:
		void display()
		{
			for(int i=0;i<num;i++)
			cout<<a[i]<<" ";
			cout<<endl;
			
		}
};

class child2: public child1{
	
	public:
		void sort()
		{
			int i,j,temp;
			for(i=1;i<num;i++)
			{
				if(a[i]>a[j])
				{
				
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
};

int main()
{
	child2 x;
	x.getdetails();
	cout<<"arrasy elements are : "<<endl;
	x.display();
	x.sort();
	cout<<"sorted array is :"<<endl;
	x.display();
	getch();
	
}
