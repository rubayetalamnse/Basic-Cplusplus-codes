#include<iostream>
using namespace std;
int main()
{
    int row, col;
    int A[2][3];
    cout<<"enter the elements for the matrix " <<endl;
            //taking user input  here:
    for ( row=0;row<2;row++)
    {
        for( col=0;col<3;col++)
        {
            cout<<"A["<<row<<"][" <<col<<"] = ";
            cin>>A[row][col];
        }
        cout<<endl;
    }
     //printing the whole array here:
    for ( row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

