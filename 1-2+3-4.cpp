#include<iostream>
using namespace std;
int main()
{
    int n, i,sum=0;
int y = 1;
cout<<"enter the maximum range";
cin>>n;      //lets take n = 10
{
  if ((i % 2) == 0) //2 4 6......
{
     sum-= i;//0-2-4-6--------
}//
  else
{
    sum+= i;//1+3+5+7+9++++++
}
}
cout<<sum;//0+1-2+3-4+5-6+7-8+9-10=-5
return 0;
}
