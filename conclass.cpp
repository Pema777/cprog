#include<iostream>
using  namespace std;
class  Polygon
{
    protected:
    int width , length;
    public:
    void setdata(int a, int b)
    {
        width=a;
        length=b;
    }
    virtual int area(void)=0;
};
class Rectangle : public Polygon
{
    public:
    int area()
    {
        return (width * length);
    }
};
class Triangle : public Polygon
{
    public:
    int area(void)
    {
        return (width*length)/2;
    }
};
int nain()
{
Rectangle rect;
Triangle trig;
Polygon *poly = &rect;
poly -> setdata(4,5);
poly = &trig;
poly -> setdata(4,5);
cout<<"area of the rectangle is "<<poly->area()<<endl;
return 0;
}