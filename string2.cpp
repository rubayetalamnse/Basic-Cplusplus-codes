#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
    char name[30];
    cout<<"Enter your name ";
    cin>>name; //it can't take rubayet Alam, only includes rubayet
    cout<<"\nwelcome "<<name<<endl;

    char fullname[20];
    cout<<"\nEnter your name "<<endl;
    gets(fullname);
    cout<<"\nwelcome "<<fullname<<endl;


    return 0;
}
