#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=3;

    x+=2;//x=x+2=3+2=5//
    cout<<"value of x: "<<x<<endl;
    x-=2;//x=x-2=5-2=3//
    cout<<"value of x: "<<x<<endl;
    x*=2;//x=x*2=3*2=6//
    cout<<"value of x: "<<x<<endl;
    x/=2;//x=x/2=6/2=3//
     cout<<"value of x: "<<x<<endl;
      x%=2;//x=x%2=3%2//
       cout<<"value of x: "<<x<<endl;//remainder is not possible by float//
    getch();
}
