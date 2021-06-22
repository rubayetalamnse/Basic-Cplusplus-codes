#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"enter your mark";
    cin>>mark;
    if (mark>40)

        cout<<"Congratulations"<<endl<<"you have passed"<<endl;
        if (mark==100)
        {
            cout<<"and you got highest mark!"<<endl;
        }
    }
    else
    {
        cout<<"Sorry"<<endl<<"you have failed"<<endl;
    }

    return 0;

}
