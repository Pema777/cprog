#include<iostream>
using namespace std;
class A
{
    protected:
    int adata;
    public:
    A(int a)
    {
        adata=a;
    }
};
class B : public A
{
    int bdata;
    public:
    B(int a,int b):A(a)
    {
        bdata= b;
    }
    void display()
    {
        cout<<"adata"<<adata<<endl;
    }
};
int main()
{
    B b(5,6);
    b.display();
    return 0;
}