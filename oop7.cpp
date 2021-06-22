#include<iostream>
using namespace std;

class student
{
public :
    string name; //variable

    student(string x) //constructor
    { //student(string name)
        name  = x;
        /*this ->name = name*/
        //x is local variable, x can have the same name as class variable
        //for that we need to use "this->name = name"
    }

    void display()   //function
    {
        cout<<name<<endl;
    }

};

int main()
{
    student s1 ("bifa");

    s1.display();

}
