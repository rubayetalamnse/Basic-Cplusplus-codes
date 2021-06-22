#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && b>c)
    {
        cout<<"largest is "<<a;
    }
   else if(b>a && b>c)
    {
        cout<<"largest is "<<b;
    }
     else
    {
        cout<<"largest is "<<c;
    }
    getch();
}
