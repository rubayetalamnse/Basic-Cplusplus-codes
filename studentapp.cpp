#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter number of subjects : "<<endl;
    cin>>n;
    int student[n];
    cout<<"\nshowing Yeasa's all subject marks :"<<endl;
    //this loop is used to take input
    for(i=0;i<n;i++)

    {
        cout<<"marks for subject "<<i+1<<" :"<<endl;
        cin>>student[i];
        sum = sum+ student[i];

    }
    cout<<"total marks  "<<sum;
    cout<<"\naverage value is : "<<(float)sum/n;

    //maximum and minimum:
    int max =student[0];
        int min =student[0];
     for(i=1;i<n;i++)
     {
         if (max<student[i])
         {
             max = student[i];
         }
          if (min > student[i])
         {
             min = student[i];
         }

     }
      cout<<"\nmaximum marks :" <<max<<endl;
         cout<<"\nminimum marks :"<<min<<endl;
    return 0;
}
