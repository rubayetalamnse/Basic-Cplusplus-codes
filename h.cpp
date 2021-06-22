#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=2;
    b=a++;       //b=3 . here value of a will increase when it(a) comes again.
    cout<<++b;      //4

    return 0;
}

