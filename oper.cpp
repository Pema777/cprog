#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;

public:
    rectangle(int l, int b) // parameterized constructor
    {
        length = l;
        breadth = b;
    }
    void operator++()
    {
        ++length;
        ++breadth;
    }
    void display()
    {
        cout << "length" << length << "breadth" << breadth << endl;
    }
};
int main()
{
    rectangle obj(5, 12); // passing value for parameterized constructor
    ++obj;
    return 0;
}