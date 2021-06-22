/*1
    2  2
    3  3  3*/

#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number of lines"<<endl;
    cin>>n;
    for(row=1; row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<row;
        }
         cout<<endl;
    }
   return 0;
}

