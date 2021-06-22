#include<iostream>
using namespace std;

class NSE
{
    public:
    int id;
    double cgpa;

     void display() //this function has no parameter, it takes value from main function
     {
          cout<< id << "  "<<cgpa<<endl;
     }

};
int main()
{
    NSE Bifa, Binoy, Nobita;
     Bifa.id =1;
     Bifa.cgpa = 4;
     Bifa.display();

      Binoy.id =1;
     Binoy.cgpa = 4;
     Binoy.display();

      Nobita.id =1;
     Nobita.cgpa = 4;
     Nobita.display();


}


