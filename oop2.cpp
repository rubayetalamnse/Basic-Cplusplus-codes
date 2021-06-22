#include<iostream>
using namespace std;

class NSE
{
    public:
    int id;
    double cgpa;

};

 int main() // main function e class er object declare korbo
 {
     NSE Rubayet, Maisha, Ayesha; //object

     Rubayet.id = 8;          //object body
     Rubayet.cgpa =3.91;

     cout<< Rubayet.id << "  "<<Rubayet.cgpa<<endl;
      Maisha.id = 33;
     Maisha.cgpa =3.46;

     cout<< Maisha.id << "  "<<Maisha.cgpa<<endl;
    Ayesha.id = 6;
    Ayesha.cgpa =3.59;

     cout<< Ayesha.id << "  "<<Ayesha.cgpa;

     return 0;
 }
