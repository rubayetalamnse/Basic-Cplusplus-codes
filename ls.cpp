#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"ENTER ANY 2 NUMBERS: "<<endl;
    cin>>n1>>n2;
    if(n1>n2)
    {
        cout<<"the larger number is "<<n1<<endl;
    }
    else
    {
        cout<<"the larger number is "<<n2<<endl;
    }

    getch();
}
