//To add two complex number using operator overloading
#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0)//=0 for default constructor inside operator overloading
    {
        real=r;
        imag=i;
    }
    Complex operator +(Complex const &obj)
    {
        Complex res;
        res.real=real + obj.real;
        res.imag=imag + obj.imag;
        return res;
    }
    void display()
    {
        cout<<"real"<<real<<endl<<"imag"<<imag<<endl;
    }
};
int main()
{
    Complex obj(10,5),obj2(2,14);//passing argument for parameterized constructor
    Complex obj3 = obj + obj2;//calling operator 
    obj3.display();
    return 0;
}