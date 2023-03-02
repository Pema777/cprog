#include<iostream>
using namespace std;
template <class T , class U>
T GetMax(T a, U b)
{
    T result;
    result=(a>b)?a:b;
    return result;
}
int main()
{
    int i,j=6;
    long l=10;
    i=GetMax<int , long>(j,l);
    cout<<i<<endl;
    return 0;
}