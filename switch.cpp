#include<iostream>
using namespace std;
int main()
{
    char ch;
    float n1, n2;
    cout<<"enter an operator (+,-,*,/)\n ";
     cin>>ch;
    cout<< "\nenter 2 numbers ";

    cin>>n1>>n2;
    cout<<"\nafter calculation:"<<endl;
    switch( ch )
    {
    case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;
        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;
        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;
        case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;
        default:
            cout<<"error! can't give result";



    }
}

