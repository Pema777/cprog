#include<iostream>
using namespace std;
class A
{
    protected:
    int data;
    public:
    A(int d)
    {
        data=d;
    }
    virtual void show()=0;
};
class B : public A
{
    public:
    B(int d):A(d)
    {

    }
    void show()
    {
        cout<<data<<endl;
    }
};
class C : public A
{
public:
C(int d):A(d)
{

}
void show()
{
    cout<<data<<endl;
}
};
int main()
{
    A *a;
    B b(5);
    C c(6);
    a=&b;
    a->show();
    a = &c;
    a->show();
    return 0;
}