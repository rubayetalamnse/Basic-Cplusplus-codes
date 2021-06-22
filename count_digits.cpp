#include<iostream>
using namespace std;
int main()
{
    long long num;                //always take this kind of data type, long long
    int counter=0;                // initialize counter as 0
    cout<<"enter a number "<<endl;
    cin>>num;                 //let's  take a number=3456

       // iterate until n becomes 0
     // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while(num != 0)         //number is not zero
    {
        num/=10;            // for each time we divide the number by 10, the counter will increase by 1
        ++counter;         //for the last number, 6 -even though we can't divide it by 10 the counter will increase.
    }
    cout<<"total digits : "<<counter;
    return 0;
}
