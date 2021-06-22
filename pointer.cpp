#include<iostream>
using namespace std;
int main()
{
    int x =5;
    int *p;
    p=&x;
    cout<<x<<endl; // x shows the value 5.
      cout<<p<<endl;// only p shows the address.
        cout<<&x<<endl;// &x shows the address of x , which means it's same as p.
          cout<<*p<<endl; // *p shows the value of x.
    return 0;
}

