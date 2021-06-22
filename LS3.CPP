#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int a,b,c,large;
    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && b>c)
    {
    large=a;
    }
   else if(b>a && b>c)
    {
        large=b;
    }
     else
    {
        large=c;
    }
    cout<<"LARGEST NUMBER IS: "<<large;
    getch();
}
