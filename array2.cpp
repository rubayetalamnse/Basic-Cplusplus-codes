#include<iostream>
using namespace std;
int main()
{
    int i,n, sum=0.0;
    cout<<"calculating of total expenditure list"<<endl;
    cout<<"enter the number of total things you bought: "<<endl;
    cin>>n;
    int money[n];
    for(i=1;i<=n;i++)
    {
        cout<<i<<"  no product cost :"<<endl;
        cin>>money[i];
        //cout<<money[i]<<" taka "<<endl;
        sum += money[i];
    }
   cout<<"total money used: "<< sum<<" taka"<<endl;

    return 0;
}
