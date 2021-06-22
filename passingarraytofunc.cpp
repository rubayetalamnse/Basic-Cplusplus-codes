#include<iostream>
using namespace std;
void displayarray( int name[], int arraysize)
{
    for(int i=0; i<arraysize; i++)
        cout<<name[i]<<" ";
}
int main()
{
    int num[5] = {10,20,30,40,50};
    displayarray(num, 5);
    return 0;
}
