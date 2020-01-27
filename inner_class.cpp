#include<iostream>
#include<conio.h>
using namespace std;
// note : aga bokahyem k da dakhel yak class dga class jor knim 2 rah darem :
//1. jor kadan class da dakhel fxn k bain yak class basha : da e sorat bayad tamam chi har marbot class da dakhel
// khod hami fxn basha .
//2. jor kadan class mostaqem da dakhel dga class :adi class jor miknim wa faqad da qesmat main , awal namme outer class
// badan :: wa name class dakhele wa name yak harf ....
 class outer{
 	public:
 		void display()
 		{
 			cout<<"in display function of outer class "<<endl;
 			class local{
 				public: 
 				void print()
 				{
 					cout<<"in print function of local class "<<endl;
 					
				 }
			 };
			 
			 local a;
			 a.print();
			 
		 }
		 class inner{
		 	public:
		 		void show()
		 		{
		 			cout<<"in show function of inner class "<<endl;
				 }
		 };
 };
 
 int main()
 {
 	outer b;
 	b.display();
 	outer::inner c;
 	c.show();
 	getch();
 }
