#include<iostream>
using namespace std;
int main()
{
    float i, num,sum=0;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=1.5;i<=num;i++)
    {

        cout<<i<<endl;
        sum = sum+i;
        //cout<<i<<endl;

    }
    cout<<"the sum of all  floating number is \n";
     cout<<sum;
     return 0;
}

