//5 types of inheritance is there in c++: single, multilevel, hierarchical, multiple, hybrid
// single inheritance - one superclass and one sub class
//multilevel inheritance - A is superclass, A's subclass is B, B's subclass is c......
// B class is both superclass for c, and subclass for A
// A is a superclass- B, C, D,E are it's subclass then it;s called hierarchical
// B and C is super class, ans D is subclass, called multiple
//function overriding means , i have inherited one function still I have made same function in subclasses

 #include<iostream>
using namespace std;

class person
{
 public:
    void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class student : public person
{
    public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }

};
class teacher : public person
{
    public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }

};
int main()
{
    student s;
    s.display();

    teacher t;
    t.display();

    person p;
    p.display();
    return 0;
}
//polymorphism - compile time - function overloading
//run time - function overriding

