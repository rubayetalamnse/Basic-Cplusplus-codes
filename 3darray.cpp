#include<iostream>
using namespace std;
int main()
{
    int row, col;
    int A[2][2][3];
    cout<<"enter the elements for the matrix " <<endl;
            //taking user input  here:
    for (int mat=0; mat<2;mat++)
    {

    for ( row=0;row<2;row++)
    {
        for( col=0;col<3;col++)
        {
            cout<<"A["<<row<<"][" <<col<<"] = ";
            cin>>A[mat][row][col];
        }
        cout<<endl;
    }
    }
     //printing the whole array here:
cout<<"the value of these 2 matrix are printed below: "<<endl;
        for (int mat=0; mat<2;mat++)
    {

    for ( row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<A[mat][row][col]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
}
cout<<endl;
    return 0;
}


