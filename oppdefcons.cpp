
#include<iostream>
using namespace std;

class NSE
{
    public:
    int id;
    double cgpa;

     void display()
     {
          cout<< id << "  "<<cgpa<<endl;
     }
      NSE (int x, double y) //constructor has same name as class name
     {
         id = x;
         cgpa = y;
     }

     NSE ()
     {
         cout<<"DEFAULT CONSTRUCTOR "<<endl;
     }
};

int main()
{
    NSE  ob;

     NSE bifa(1,5.00);
     bifa.display();


     NSE binoy(2,5.00);
     binoy.display();
     return 0;

}





