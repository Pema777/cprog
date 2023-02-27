#include<iostream>
using namespace std;
class Student
{
   int admno;
   char sname[20];
   float eng;
   float math;
   float science;
   float total;
   float ctotal()
   {
    total = eng + math + science;
    return total;
   } 
   public:
   void takedata()
   {
    cin>>eng>>math>>science>>sname>>admno;
    ctotal();
   }
   void showdata()
   {
    cout<<admno<<eng<<sname<<math<<science<<total<<endl;
   }
};
int main()
{
    Student  obj;
    obj.takedata();
    obj.showdata();
    return 0;
}