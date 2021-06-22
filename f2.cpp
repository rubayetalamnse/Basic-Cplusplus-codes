#include<iostream>
using namespace std;
void division (float , float);
void add (float , float);
void multi (float , float);
void subtraction (float , float);
int main()
 {
     division(20,5);
     division(10,20);
     add(14,34);
     multi(4,5);
     subtraction(10,5);
     cout<<"\nall functions are called "<<endl;
     return 0;
 }
 void division(float a, float b)
 {
     float answer = a/b;
     cout<<"the  answer is "<<answer <<" (division of "<<a<<" & "<<b<<")"<<endl;
 }
 void subtraction(float a, float b)
 {
     float answer = a-b;
     cout<<"the  answer is "<<answer <<" (subtraction of "<<a<<" & "<<b<<")"<<endl;
 }
  void multi(float a, float b)
 {
     float answer = a*b;
     cout<<"the  answer is "<<answer <<" (multiplication of "<<a<<" & "<<b<<")"<<endl;
 }
  void add(float a, float b)
 {
     float answer = a+b;
     cout<<"the  answer is "<<answer <<" (addition of "<<a<<" & "<<b<<")"<<endl;
 }


