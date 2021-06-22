#include<iostream>             //array is collection of variable which have same data type.
using namespace std;
int main()
{
    int i;
     int marks[5]; //data_type array_name [array_size] //here we have 5 variables marks[0],marks[1],marks[2],marks[3],marks[4],
    cin>>marks[0];
      cin>>marks[1];
        cin>>marks[2];
          cin>>marks[3];
            cin>>marks[4];
            cout<<"elements are "<<endl;

    //int marks[5]={20,30,40,50,60}; //we can also give the value of array at starting
    //int books[ ]={20,30,40,50,60}; //we can keep the size blank! If we want!
    for(i=0;i<=4;i++)
    {
        cout<<marks[i]<<" ";
    }
    return 0;
}
