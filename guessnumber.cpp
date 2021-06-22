#include<iostream>
#include<stdlib.h>
using namespace std ;
int main()
{
    while(1)
    {
        int guessnumber, randomnumber ;
    cout<<"\n enter your guess between 1 to 10: ";
    cin>>guessnumber;

     randomnumber = rand()%10+1;

   if (guessnumber == randomnumber)
   {
       cout<<"\n YOU HAVE WON !\n";
   }
    else
    {
        cout<<" \nYOU HAVE LOST! \n";
        cout<<"\n the exact number is : "<<randomnumber<<endl;
    }
    }
    return 0;
}
