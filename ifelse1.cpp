#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"ENTER ANY NUMBER: "<<endl;
    cin>>num;

    if(num>0)
    {
        cout<<"POSITIVE NUMBER"<<endl;
    }
    if(num<0)
    {
        cout<<"NEGATIVE NUMBER"<<endl;

    }
    if(num==0)
    {
        cout<<"ZERO"<<endl;
    }
    cout<<"WOW! you'v done it.";
    getch();
}
