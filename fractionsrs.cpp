#include<iostream>
using namespace std;
int main()
{
    double i, num,sum=0;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=1;i<=num;i++)
    {

        cout<<"1"<<"/"<<i<<endl;
        sum = sum+1/i;
        //cout<<i<<endl;

    }
    cout<<"the sum of all number is \n";
     cout<<sum;
     return 0;
}

