#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,num,c;
    c=0;
    cout<<"enter any positive number ";
    cin>>num;
    for(i=2;i<num;i++)
    {
       if( num%i==0)
       {
           c++;
           break;
       }

    }
     if(c==0)
       {
                     cout<<"prime number";
       }
   else
   {
       cout<<"not prime number";
   }

    getch();
}
