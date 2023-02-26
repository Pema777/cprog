#include<iostream>
using namespace std;
class Marks
{
    int m1,m2;
    public:
    Marks(){
        m1=0;
        m2=0;
    }
    Marks(int i , int j)
    {
        m1=i;
        m2=j;
    }
    void operator ==(Marks &M)
    {
        m1=M.m1;
        m2=M.m2;
    }
    void display()
    {
        cout<<m1<<endl;
        cout<<m2<<endl;
    }
};
int main()
{
    Marks m1(45,60);
    Marks m2(70,50);
    m1.display();
    m2.display();
    m1=m2;
    m1.display();
    return 0;
}