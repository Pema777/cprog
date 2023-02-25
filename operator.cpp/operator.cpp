#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
    rectangle(int l , int b)//parameterized constructor
    {
        length=l;
        breadth=b;
    }
    friend void operator ++(rectangle&);
    void display()
    {
        cout<<"lenght"<<length<<endl;
        cout<<"breadth"<<breadth<<endl;
    }
};
void operator ++(rectangle &r)
{
    ++r.length;
    ++r.breadth;
}
int mian()
{
    rectangle obj(5,6);//passing value to parameterized constructor
    ++obj;//operator is called here
    obj.display();
    return 0;
}
