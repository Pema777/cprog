#include<iostream>
using namespace std;
template<class T>
class mypair
{
    T a,b;
    public:
    mypair(T first, T second)
    {
        a=first;
        b=second;
    }
    T GetMax()
    {
        T retval;
        retval = a>b?a:b;
        return retval;
    }
};
int main()
{
    mypair<int>myobject(100,125);
    cout<<myobject.GetMax();
    mypair<float>obj(100.5,200.4);
    cout<<obj.GetMax();
    return 0;
}