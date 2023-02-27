#include<iostream>
using namespace std;
int main()
{
 int  days,yr,m,d;
 cout<<"enter the days"<<endl;
 cin>>days;
 yr=days/365;
 d=days%365;
 m=d/30;
 cout<<yr<<m<<d<<endl;
 return 0;
}