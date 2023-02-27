#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cout<<"this  is a default constructir"<<endl;
    }
};
int main()
{
    A* a =new A;
    cout<<"object  of class A was called "<<endl;
    A* b= (A*)malloc(sizeof(A));
    cout<<"object was created using malloc"<<endl;
    return 0;
}