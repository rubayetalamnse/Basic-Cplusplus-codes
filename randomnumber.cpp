#include<iostream>
#include<stdlib.h>
using namespace std;

 int main()

 {
     for (int i=1;  i<=5 ;  i++)
     {
    int randomnumber = rand()%5+1;      //1 to 5 er moddhe random number.
     cout<<"random number = "<<randomnumber<<endl;
     }
     return 0;
 }
