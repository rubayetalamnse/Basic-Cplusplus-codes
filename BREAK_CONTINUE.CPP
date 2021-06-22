#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=100;i=i+3)
    {
        if(i==25)
        {
            continue;
        }
        if(i>32)
        {
            break;
        }
        cout<<i<<endl;//1,4,7,10,13,16,19,22,28,31//
    }

    getch();
}
