#include<iostream>
using namespace std;

 int tuna = 10;
 int main( )
 {
      int tuna = 50;
    cout<<"inside the main function tuna  = " <<tuna; //50 will be printed, local var

    cout<<"\nthe value of tuna = "<< :: tuna <<endl;  //10 will be printed, global var

    return 0;
 }
