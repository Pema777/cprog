//Overloading binary operator
#include<iostream>
using namespace std;
class Distance
{
    public:
    int feet,inch;
    Distance()
    {
        this->feet-0;
        this->inch=0;
    }
    Distance(int f, int i)
    {
        this->feet=f;
        this->inch=i;
    }
    Distance operator +(Distance d2)
    {
        int ft= feet + d2.feet;
        int in= inch + d2.inch;
        ft= ft +in/12;
        in= in%12;
        return  Distance ( ft,in);
    }
};
int main()
{
    Distance d1(8,9);
    Distance d2(10,5);
    Distance d3;
    d3=d1 + d2;
    cout<<"feet= "<<d3.feet<<endl<<"inch= "<<d3.inch<<endl;
    return 0;
}