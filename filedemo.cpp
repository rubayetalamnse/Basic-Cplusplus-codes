#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name;

    ofstream file;

    file.open("student.txt",ios::out|ios::app); //file created here, adding data that are printed every time

    cout<<"enter your name :"; //taking user input to write something in my file

    getline(cin,name);

    file<<" welcome "<< name<<endl;

    //file<<" I am rubayet, this c++ tutorial is going to end. \n" ; //wrote something in my file

file.close();
    cout<<"data is stored"<<endl;
    return 0;
}
