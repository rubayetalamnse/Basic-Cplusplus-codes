#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 ="RUBAYET";
    string str2 =" alam";
    string str3;
    string str4;

    str3 = str1;
    cout<<"str3 : "<<str3<<endl;

  str4 = str1 + str2;
  cout<<"str1 +str2 = "<<str4<<endl;

  int length = str1.size();
  cout<<"\nlength of str1 = "<<length;
}
