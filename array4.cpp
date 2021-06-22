#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int positive=0, negative=0, even=0 , odd=0 , zero=0;
    cout<<"how many integer numbers do you want?" <<endl;
    cin>>n;
    cout<<"now enter those numbers you want to "<<endl;
    int numbers[n];
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
                 if (numbers[i]>0)
            {positive++;}

            else if (numbers[i]<0)
                {negative++;}
                 else
                      {zero++;}

            if (numbers[i]%2 == 0)
                {even ++;}
            else
                {odd++;}

    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<numbers[i]<<endl;

    }
    cout<<endl;

 cout<<"positive "<<positive<<endl;;
 cout<<"\nnegative "<<negative<<endl;
 cout<<"\nzero "<<zero<<endl;
 cout<<"\neven "<<even<<endl;
 cout<<"\nodd "<<odd<<endl;
    return 0;

}
