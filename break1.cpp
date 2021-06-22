#include<iostream>
using namespace std;
int main()
{

    int i;
    for (i=1;i<=20;i++)
    {
        if(i==10)
        {
            //break;        output- 1 2 3 4 5 6 7 8 9
            continue; //output - 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19 20
            }
        cout<<i<<endl;
    }


    return 0;
}
