#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string line;

    ifstream file;
    file.open ("rubayet.txt");

    if (file.fail())
    {
        cerr<<"error in opening file!  "<<endl;
    }

    while (getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();

}

