#include<iostream>
using namespace std;
int main()
{
    int A[3][4]={ // we have given values during initialization , we don't take user input here.

    {3,4,5,6},
    {7,8,9,0},
    {1,5,3,7}

                    };
            //printing the whole array here:
    for (int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
