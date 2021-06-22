
#include<iostream>
using namespace std;
int main()
{
    int i,n,rn=0;
    cout<<"how many integer numbers do you want?" <<endl;
    cin>>n;
    cout<<"now enter those numbers you want to "<<endl;
    int numbers[n],  reversenumbers[n];
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];

    }
      for(i=n-1;i>=0;i--)
    {
    reversenumbers[i]= numbers[rn];
    rn++;

    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<reversenumbers[i]<<endl;
    }
    cout<<endl;
    return 0;

}
