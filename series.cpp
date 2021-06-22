#include<iostream>
using namespace std;
int main()
{
    int i, num,sum=0;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=1;i<=num;i++)
    {

        cout<<i<<endl;
        sum = sum+i;
        //cout<<i<<endl;

    }
    cout<<"the sum of all number is \n";
     cout<<sum;
     return 0;
}
