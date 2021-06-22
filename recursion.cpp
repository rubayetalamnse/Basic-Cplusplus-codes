#include<iostream>
using namespace std;

int factorial (int n) //function name = factorial, parameter is int n
 {
    if (n==1)
        return 1;
    else
        return n*factorial(n-1); // 5=5*4*3*2*1, 5=5*4!
}
int main ()
{
    int answer_of_factorial = factorial(5); //calling the function, and keeping it's answer in a variable called anwer_of_factoial
    cout<<answer_of_factorial; // printing the output of the function , through this variable. 120
}
