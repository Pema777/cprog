//Overloading negation operator
#include<iostream>
using namespace std;
class Point
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"enter the x and y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    }
    Point operator -()
    {
        Point t;
        t.x=-x;
        t.y=-y;
        return t;
    }
};
int main()
{
    Point p,q;
    p.getdata();
    q=-p;
    p.display();
    q.display();
    return 0;

}