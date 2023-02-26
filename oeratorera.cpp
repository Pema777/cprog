#include<iostream>
using namespace std;
class Distance //Class NAme
{
    int feet, inch;
    public:
    Distance()
    {
        this -> feet = 0;
        this -> inch = 0;
    }
    Distance(int f, int i)
    {
        this -> feet=f;
        this -> inch =i;
    }
    void display()
    {
        cout<<"feet"<<feet<<endl<<"inch"<<inch<<endl;
    }
    friend Distance operator +(Distance &d1 , Distance &d2)
    {
        Distance d3;
        d3.feet = d1.feet + d2.feet;
        d3.inch = d1.inch + d2.inch;
        d3.feet =d3.feet + d3.feet/12;
        d3.inch = d3.inch %12;
        return d3;
    }
};
int main()
{
    Distance obj(2,4),obj2(2,4),obj3;
 obj3 = obj + obj2;
 obj3.display();
 return 0;
}