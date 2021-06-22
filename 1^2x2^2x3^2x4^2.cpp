#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, num,sum=1;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=1;i<=num;i++)
    {

        cout<<i<<endl;
        sum = sum*pow(i,2);//sum*i*i can work too!
        //cout<<i<<endl;

    }
    cout<<"the sum of all number is \n";
     cout<<sum;
     return 0;
}

