#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter any number: ";
    cin>>num;
    for(i=1;i<=12;i++)
    {
        cout<<num<<"x"<<i<<"="<<(num*i)<<endl;
    }

    getch();
}
