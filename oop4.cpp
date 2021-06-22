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
     void setvalue (int x, double y)
     {
         id =  x;
         cgpa = y;
     }

};
int main()
{
    NSE Bifa, Binoy, Nobita;


    Bifa.setvalue(1, 5.00);
      Bifa.display();


  Binoy.setvalue(2, 6.00);
                      Binoy.display();


  Nobita.setvalue(3, 7.00);
   Nobita.display();


  return 0;

}



