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

     NSE (int x, double y)
     {
         id = x;
         cgpa = y;
     }
};
int main()
{
    NSE Bifa(1,5), Binoy(2,6), Nobita(3,7);



      Bifa.display();



                      Binoy.display();



   Nobita.display();


  return 0;

}



