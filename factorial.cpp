#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, num, fact;
    fact=1;
    cout<<"enter any positive number ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial  value  of given number is: "<<fact;
    getch();
}
