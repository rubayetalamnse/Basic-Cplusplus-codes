#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int number;
    int sum=0;
    while(i<=10)
    {
    cin>>number;
    sum += number;
    i++;
    }
    cout << sum<<endl;

    return 0;
}
