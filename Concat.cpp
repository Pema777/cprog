#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char name[23];
    public:
    void getdata()
    {
        cout<<"enter the string"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"name is "<<name<<endl;
    }
    String operator +(String t)
    {
        String temp;
        strcpy(temp.name, name);
        strcat(temp.name,t.name);
        return temp;
    }
};
int main()
{
    String obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3= obj1 + obj2;
    obj3.getdata();
    return 0;
}