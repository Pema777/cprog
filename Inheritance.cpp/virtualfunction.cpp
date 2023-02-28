#include<iostream>
using namespace std;
class Shape
{
    public:
     virtual void draw()
     {
        cout<<"Drawing is a shape";
     }
};
class Circle : public Shape
{
    public:
    void draw()
    {
    cout<<"drawing is a circle"<<endl;
}
};
 int main()
 {
    Shape *shape;
    Circle circle;
    shape = &circle;
    shape ->draw();
    return 0;
 }
