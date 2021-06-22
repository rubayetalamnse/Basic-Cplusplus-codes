#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double b,h,a;
    cout<<"enter base and height"<<endl;
    cin>>b>>h;
    a=0.5*b*h;//we can use 1.0/2 or type casting =double(1/2) here//
    cout<<"Area is: "<<a;

    getch();
}
