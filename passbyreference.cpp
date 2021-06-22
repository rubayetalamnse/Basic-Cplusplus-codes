
#include<iostream>
using namespace std;

void displayvalue(int *num)
{
    *num = 20;
}
int main()
{
    int x = 10;
    cout<<"before calling the function x = "<<x<<endl;
    displayvalue(&x);
    cout<<"\nafter calling the function x = "<<x<<endl;

}
