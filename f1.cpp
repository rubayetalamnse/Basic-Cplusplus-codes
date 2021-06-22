#include<iostream>
using namespace std;
void division (float , float);
int main()
 {
     division(20,5);
     division(10,20);
     return 0;
 }
 void division(float a, float b)
 {
     float answer = a/b;
     cout<<"the  answer is "<<answer <<endl;
 }
