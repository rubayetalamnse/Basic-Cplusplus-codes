#include<iostream>
using namespace std;

int x= 10; //global variable, this value of x is valid in every function
 void display()
 {
     cout<< "\ninside the display function , the value of x is "<<x<<endl;
 }

int main()
{
    int x = 10;
    cout<<"inside the main function x = " <<x; //x is only valid in this main function, x is local variable
    display();
    return 0;
}
