#include<iostream>
using namespace std;
class Employee
{
    int eid , sal;
    public:
    void getdata()
    {
        cout<<"enter the employee id and salary"<<endl;
        cin>>eid>>sal;
    }
    void display()
    {
        cout<<"eid"<<eid<<"salary"<<sal<<endl;
    }
};
class Company
{
    int cid;
    char name[20];
    Employee e;
    public:
    void getdata()
    {
        cout<<"enter the company name and id"<<endl;
        cin>>name>>cid;
        e.getdata();
    }
    void display()
    {
        cout<<"cid and name are"<<endl;
        cout<<cid<<name<<endl;
        e.display();
    }
};
int main()
{
    Company obj;
    obj.getdata();
    obj.display();
    return 0;
}