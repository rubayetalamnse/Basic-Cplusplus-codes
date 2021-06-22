#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"how many integer numbers do you want?" <<endl;
    cin>>n;
    cout<<"now enter those numbers you want to "<<endl;
    int numbers[n];
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];

    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<numbers[i]<<endl;
    }
    cout<<endl;

}
