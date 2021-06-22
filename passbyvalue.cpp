#include<iostream>
using namespace std;

void displayvalue(int num) //int num is formal parameter
{
    num=20; //we can change the formal parameter, but this change won't affect actual parameter
} //means whatever value we put for number in the function, the output will be always the value we give for calling it.
int main( ) //when we call the function, our wanted values(10) copy goes to the function.
{                // and printed
    int x=10;
    cout<<"before calling the function x "<<x<<endl;
    displayvalue(x); //the x is actual parameter
    cout<<"\nafter calling the function x= " <<x<<endl;


}
