
#include<iostream>
using namespace std;
int main()
{
    int i, num,sum=0;
    cout<< "enter the last number"<<endl;
    cin>>num;
     cout<<"all the numbers are "<<endl;
    for(i=2;i<=num;i=i+2)
    {

        cout<<i<<endl;
        sum = sum+i;
        //cout<<i<<endl;

    }
    cout<<"the sum of all even number is \n";
     cout<<sum;
     return 0;
}
