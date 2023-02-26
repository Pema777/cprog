#include<iostream>
using namespace std;
class Time
{
    int hour, minute;
    public:
    void getdata()
    {
        cout<<"enter the hour and minute"<<endl;
        cin>>hour>>minute;
    }
    void display()
    {
        cout<<"hour"<<hour<<endl<<"minute"<<minute<<endl;
    }
     int operator <(Time t)
     {
        if(hour<t.hour){
            return 1;
        }
        else if(hour == t.hour && minute < t.minute)
        {
            return 1;
        }
        else{
            return 0;
        }
     }
};
int main()
{
    Time t1,t2;
    t1.getdata();
    t2.getdata();
    if(t1<t2)
    {
        cout<<"t1 is less than +2"<<endl;
    }
    else{
        cout<<"t2 is less than t1"<<endl;
    }
    return 0;
}