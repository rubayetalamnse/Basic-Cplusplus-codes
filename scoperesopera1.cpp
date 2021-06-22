#include<iostream>
using namespace std;

 int tuna = 10;
 int main( )
 {
      int tuna = 50; //giving new local var
      :: tuna =30;//changing the value of global var

    cout<<" the  value of tuna  = " <<::tuna;  // tuna =30, prints the changed global variable
    cout<<" \nthe  value of tuna  = " <<tuna; //tuna =50, prints out the new variable
    cout<<" \nthe  value of tuna  = " <<tuna; //tuna =10 , when no var is declared in main function

 }
