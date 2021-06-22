#include<iostream>
using namespace std;

void square ( float a)// void square ()
{
    float result =a*a; // 6*6
    cout<<"square of "<<a<<" = "<<result<<endl; // remove 'a' variable.
}
int main()
{
    square(6); //remove 6, square ()
      square(7);
        square(11);
          square(12);
    return 0;
}
