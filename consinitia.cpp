#include<iostream>
using namespace std;
 class student
 {
     public:
    const int admissionfee; //we can't use it as constant var without initialize
const int examfee; // we need to initialize constant variable at  the beginning
int id;
     student(int x, int y, int z) //constructor with parameter
     :  admissionfee(x) ,examfee(y)     // now we can use constant
     {
        //admissionfee = x;
        cout<<admissionfee<<endl;
     cout<<examfee<<endl;
     id = z;
     cout<<"Id = "<<id<<endl;

     }

 };

int main()
{
    student bifa(25000, 500,8);


}

