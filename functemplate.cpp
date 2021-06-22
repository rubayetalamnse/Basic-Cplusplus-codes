#include<iostream>
using namespace std;

template <class firsttemplate, class secondtemplate>

firsttemplate add(firsttemplate a, secondtemplate b)
//int add(int a, int b) //making a function
{
    return a+b;
}

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.56, 5.40)<<endl;
    cout<<add(10.5,5)<<endl;        //for different data type in same time, we have used two different templates
    return 0;
}
