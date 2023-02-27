//Ambiguity in inheritance 
#include<iostream>
using namespace std;
class A
{
    public : 
    void show()
    {
        cout<<"this is a class A"<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"this is class B"<<endl;
    }
};
class C : public A, public B 
{
    void show()
    {
        A::show();
        B::show();
    }
};
int main()
{
    C obj;
    obj.A::show();
 return 0;
}