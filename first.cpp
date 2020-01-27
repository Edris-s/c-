#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main()
{
    int id,basic,ta,da,hra,ma,gross,itax,l,lamount,net;
    char name[20] , dsg[20];
    cout<<"Enter your empolyee id: ";
    cin>>id;
    cout<<"Enter the name: ";
    fflush(stdin);
    cin.get(name,20);
    cout<<"Enter the designation: ";
    fflush(stdin);
    cin.get(dsg,20);
    cout<<"Enter the basic sallery: ";
    cin>>basic;
    cout<<"Enter the total leave: ";
    cin>>l;
    if(basic<=10000)
    {
        ta=basic*5/100;
        da=basic*6/100;
        hra=basic*7/100;
        ma=2500;

    }
    else
    {
        ta=basic*7/100;
        da=basic*9/100;
        hra=basic*12/100;
        ma=4500;


    }
    gross=basic-ta-da-hra-ma;
    if(basic<=20000)
    itax=0;
    else 
    itax=(basic-20000)*5/100;
    lamount=(basic/30)*l;
    net = gross-itax-lamount;

    cout<<"---------->>>sallery slip<<<-------"<<endl;
    cout<<"employee id         :            "<<id<<endl;
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








