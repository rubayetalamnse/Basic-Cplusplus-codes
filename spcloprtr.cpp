#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float b;
    double d;
    char name[20];

    int c= sizeof(a);
    cout<<"sizeof integer is: "<<c<<endl;
     int e= sizeof(b);
    cout<<"sizeof float is: "<<e<<endl;
     int m= sizeof(d);
    cout<<"sizeof double is: "<<m<<endl;
     int p= sizeof(name);
    cout<<"sizeof character is: "<<p<<endl;

    getch();
}
