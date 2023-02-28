#include<iostream>
using namespace std;
class Base{
    public:
    virtual ~Base()
    {
        cout<<"Base Destroyed"<<endl;
    }
};
class Derv : public Base{
    public:
    ~Derv()
    {
        cout<<"dervied destoryed"<<endl;
    }
};
int main()
{
    Base *pbase = new Derv();
    delete pbase;
    return 0;
}