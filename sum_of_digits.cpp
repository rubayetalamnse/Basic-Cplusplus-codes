#include<iostream>
using namespace std;
int main()
{
    int sum=0, num,r,temp;
    cout<<"enter any number"<<endl;
    cin>>num;
    temp=num;
    while(temp != 0)
    {

        r = temp%10 ;
        sum = sum+r;
        temp = temp/10;

    }
    cout<<"The sum of digits : "<<sum;


    return 0;
}
