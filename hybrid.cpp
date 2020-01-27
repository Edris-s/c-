#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class student{
	protected:
		int roll;
		char name[20];
		public:
			void getdetails()
		{
			cout<<"enter the name and roll number of ther student : ";
			fflush(stdin);
			cin.get(name,20);
			cin>>roll;
			
		}
};

class subjects:public student{
	protected:
	int p,c,m,h,e;
	public:
		void getsubjects()
		{
			cout<<"enter the score physic"<<endl;
			cin>>p;
			cout<<"enter the score chemistry "<<endl;
			cin>>c;
			cout<<"enter the score maths "<<endl;
			cin>>m;
			cout<<"enter the score hendi "<<endl;
			cin>>h;
			cout<<"enter the score english"<<endl;
			cin>>e;
		}
};

class sports{
	protected:
	int phy;
	public:
		void getsports()
		{
			cout<<"enter the score physical educations "<<endl;
			cin>>phy;
		}
};

class result:public subjects ,public sports {
	int total;
	float avg;
	char grade[];
	public:
		void calculate()
		{
			total=p+c+m+h+e+phy;
			avg=(float)total/6;
			if(avg>=90)
			strcpy(grade,"A+");
			else if(avg>=80)
				strcpy(grade,"A");
			else if(avg>=70)
				strcpy(grade,"B+");
			else if(avg>=60)
				strcpy(grade,"B");
			else if(avg>=50)
				strcpy(grade,"C");
			else if(avg>=40)
				strcpy(grade,"D");
				else
					strcpy(grade,"F");
		}
		void display()
		{
			cout<<name<<"\t"<<roll<<"\t"<<total<<"\t"<<avg<<"\t"<<grade<<endl;
			
		}
};

int main()
{
	int num;
	cout<<"enter the number of students: " ;
	cin>>num;
	result r[num];
	
	cout<<"enter the details of student "<<num<<"."<<endl;
	for(int i=0;i<num;i++)
	{
	
			
			r[i].getdetails();
			r[i].getsubjects();
			r[i].getsports();
			r[i].calculate();
	}
	cout<<"name\troll\ttotal\tavg\tgrade"<<endl;
	for(int i=0;i<num;i++)
	r[i].display();
	getch();
}


