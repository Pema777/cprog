#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    try
    {
      if(b==0)
      {
        throw b;
      }
else
{
 cout<<"the result is"<<(float)a/b;
}
    }
catch(int i)
{
    cout<<"divide by zero exception"<<i;
}
cout<<endl<<"END";
return 0;    
}