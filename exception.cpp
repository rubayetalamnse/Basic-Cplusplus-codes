#include<iostream>
using namespace std;

int main()
{

    try
    {


    double num1, num2,result;
    cout<<"enter first number ";
    cin>>num1;
    cout<<"enter second  number ";
    cin>>num2;

    if (num2 == 0)
    {
        throw 4;
    }
     result =  num1/num2;
    cout<<result;

    } //try ends here

    catch (...) //using ... makes it valid for any data type, otherwise use int
    {
        cout<< "divide by zero is not possible"<<endl;
    }


    return 0;
}
