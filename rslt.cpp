#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    cout<<"enter mark: "<<endl;
    cin>>mark;
    if(mark>100)
    {
        cout<<"invalid";
    }
    else if(mark<0)
    {
        cout<<"invalid";
    }
     else if(mark>=80)
    {
        cout<<"A+";
    }
    else if(mark>=70)
    {
        cout<<"A";
    }
    else if(mark>=60)
    {
        cout<<"B+";
    }
    else if(mark>=50)
    {
        cout<<"B";
    }
    else if(mark>=40)
    {
        cout<<"C+";
    }
    else if(mark>=33)
    {
        cout<<"D";
    }
    else
    {
        cout<<"fail"<<endl;
        cout<<"don't lose hope, try again!"<<endl;
    }

    getch();
}
