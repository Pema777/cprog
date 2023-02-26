#include<iostream>
using namespace std;
class A
{
    protected:
    int adata;
};
class B : public  virtual A
{

};
class C :public  virtual A
{

};
class D : public B, C{
    public:
    D(int a)
    {
        adata=a;
    }
    int getdata()
    {
        return adata;
    }
};
int main()
{
    D d(5);
    cout<<d.getdata()<<endl;
    return 0;
}