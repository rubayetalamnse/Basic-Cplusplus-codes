#include<iostream>
using namespace std;
int main()
{
    int n1,n2,*p1,*p2,sum;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    p1 = &n1;
    p2 = &n2;
    sum = *p1+*p2;
    cout<<"the sum is "<<sum<<endl;
    return 0;

}
