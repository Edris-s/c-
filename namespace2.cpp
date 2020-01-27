#include<iostream>
#include<conio.h>
using namespace std;
namespace N1
{
	class sample{
		public:
			void display()
			{
				cout<<"i am in display function"<<endl;
			}
	};
}
namespace N2
{
	class sample{
		public:
			void display()
			{
				cout<<"i am in second display function"<<endl;
			}
	};
}

int main()
{
	N1::sample x;
	N2::sample y;
	x.display();
	y.display();
	getch();
}
