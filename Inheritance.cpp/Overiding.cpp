#include<iostream>
using namespace std;
class A
{
    public:
    sum()
    {
        cout<<"Hello"<<endl;
    }
};
class B : public A
{
    public:
    sum()
    {
        cout<<"World";
    }
};
int main()
{
    B obj;
    obj.sum();
    return 0;
}
