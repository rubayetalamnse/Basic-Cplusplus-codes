//to initialize object we need a function called constructor
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
     /*void setvalue (int x, double y)
     {
         id =  x;
         cgpa = y;
     }*/

     NSE (int x, double y) //constructor has same name as class name
     {
         id = x;
         cgpa = y;
     }
};
int main()
{
    NSE Bifa(1,5), Binoy(2,6), Nobita(3,7);

//we don't need to call the constructor
//constructor doesn't have return value, not even void
      Bifa.display();

//it's two type, default , parameterized

                      Binoy.display();
//this constructor NSE is parameterized, default constructor has no parameter


   Nobita.display();


  return 0;

}



