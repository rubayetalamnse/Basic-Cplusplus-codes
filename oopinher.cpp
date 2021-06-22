//to get some variables and function from one class to another class, so that we don't need to initialize again in second class
//first class = parent, base, super, mother
//second class, which got values from first one = child, derived, sub, daughter
//code reusability
//take less memory, less time.
#include<iostream>
using namespace std;
 class  team_members
 {
 public:
    string name;
    int age;

    void display1()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
    }

 };

 class organizer : public team_members //organizer is inheriting team_members
 {
     //name, age, display1() has come into this class
 public:
    int id;

    void display2()
    {
        /*cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;*/
        //this two lines not needed we just can call display1() function .
        cout<<"ID = "<<id<<endl;
        display1();
    }

 };

 int main()
 {
     organizer s1;

     s1.id = 8;
     s1.name = "bifa";
     s1.age = 21;
     s1.display2();
     return 0;
 }


