#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name;

    int age;

    ofstream file; //use this function to write on files

    file.open("student_details.txt", ios::out|ios::app);

    for(int i=1; i<=3;i++) // we can take 3 times every data
{


    cout<<"enter your name : ";

    getline(cin,name);

    file<<name<<"\t";

     cout<<"enter your age : " ;

   cin>>age;   //age is integer value

    file<<age<<"\n";

    cin.ignore(); //to avoid name after name

}
file.close();
cout<<"all the data is stored"<<endl;
    return 0;

}
