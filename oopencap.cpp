// oop has 4 core concept - encapsulation, inheritance, polymorphism, abstraction
//access specifiers in c++ = public, private , protected.
//any member(variable, function) of a class can be achieved/accessed from outside or not, depends on access specifiers
//encapsulation means a class, where variables and functions are present together as a package
// encapsulation process can protect data as private
// private data can't be accessed from outside
// to access private members, we need set and get function
#include<iostream>
using namespace std;

class student
{
private:
    string name;
public:
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }

};



int main()
{
 student s1;
 //s1.name = "bifa"; not possible as name is private

   s1.setname("bifa");
   cout<<s1.getname();

}
