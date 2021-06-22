#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"enter any year: ";
    cin>>y;
    if(y%4==0 && y%100!=0 || y%400==0)
    {
        cout<<"leap year!!!";
    }
   /* else if(y%400==0)
    {                                  **this condition should be at first if we dont use or and include it with the 
                                         condition
        cout<<"leap year!!!";
    }*/
    else
    {
        cout<<" not leap year";
    }
    getch();
}
