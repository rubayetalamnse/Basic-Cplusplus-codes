#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,large;
    cout<<"enter any 2 numbers: ";
    cin>>x>>y;
    large= (x>y) ? x:y;
    cout<<"large number is "<<large;
    getch();
}
