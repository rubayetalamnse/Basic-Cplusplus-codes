//c type string = char message[4] = {'b','i','n'}; one is kept for null character
// char messages[] = {'s','i','n','o','y','\0'}
// char messages2 []= "bifa"
#include<iostream>
using namespace std;

int main()
{
    char message[6]= {'b','i','n','o','y'};
     char message2[]= {'s','i','n','o','y','\0'};
      char m3 []= "bifa";

    cout<<message<<endl;
     cout<<message[2]<<endl;
     cout<<message2<<endl;
     cout<<m3<<endl;


    return 0;
}
