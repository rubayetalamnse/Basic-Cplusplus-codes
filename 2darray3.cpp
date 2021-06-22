#include<iostream>
using namespace std;
int main() //storing temperature for Dhaka and CTG for next 1 week.
{
    int row=2, col=7; //row = city , col = days
    cout<<"storing temperature of Dhaka and CTG for next 1 week"<<endl;

    //taking input of temperature

    int temperature[row][col];

    cout<<"enter the temperature for both cities "<<endl; //14 values should be taken
    for(row=0;row<2;row++)
    {
        for(col=0;col<7;col++)
        {
                cout<<" city "<<row+1<<" day " <<col+1<<" - ";//lets say, city 1= dhaka, city 2=ctg
            cin>>temperature[row][col];
        }
        cout<<endl;

    }
                cout <<" we see lot's of difference between these two cities " <<endl;
      for(row=0;row<2;row++)
    {
        for(col=0;col<7;col++)
        {

            cout<<" city "<<row+1<<" day " <<col+1<<" - "<<temperature[row][col]<<" "<<endl;
        }
 cout<<endl;

    }
cout<<"\n here city 1= Dhaka city, city 2= Chittagong city \n\n\n\n\n";
return 0;

}
