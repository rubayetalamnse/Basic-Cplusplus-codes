#include<iostream>
using namespace std;
int addition( int,int);
int main()
{
  int result =  addition(10,20); //cout<<addition(5,5)
    cout<<result;
}

int addition(int a, int b)
{
    int sum = a+b;
    return sum;
}
