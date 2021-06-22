#include<iostream>
using namespace std;
int main()
{
    int i, lastnum, firstnum=0, secondnum=1, nextnum;
    cout<<"enter the last number of the series"<<endl;
    cin>>lastnum; //10
    for(i=1;i<=lastnum;++i)//i=1 2 3.....10 means 10 fibonacci number will be shown
    {
        cout<<firstnum<<" ";//0 1 1 2 3 5 8 13 21 34
        nextnum= firstnum+secondnum;//0+1=1
        firstnum = secondnum;//1
        secondnum=nextnum;//1
        // so the nextnum= 1+1 =2

    }
    return 0;
}
