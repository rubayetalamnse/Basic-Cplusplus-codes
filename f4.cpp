#include<iostream>
using namespace std;

void display(int a =10, int b=20)
{
    cout<<a<<" "<<b<<" ";
}
int main()
{
    display(); // default value will be shown

    display (25,40); // user input showing

  display (7);

    return 0;
}
