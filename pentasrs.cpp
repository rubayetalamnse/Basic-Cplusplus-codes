#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, num,sum=0;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=1;i<=num;i++)
    {

        cout<<i<<"^"<<"5"<<endl;
        sum = sum+pow(i,5);


    }
    cout<<"the sum of all number is \n";
     cout<<sum;
     return 0;
}

