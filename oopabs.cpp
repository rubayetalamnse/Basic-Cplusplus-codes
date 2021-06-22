//hiding details and showing only the functionality to the user
//we call through dialer, but we really don't know  how calls are made
//pure virtual function doesn't have any body
//abstract class uses pure virtual function, object can't be created here, pointers can be created, it can declare constructor
#include<iostream>
using namespace std;

class mobileuser
{
public:

    void call()
    {
        cout<<" hello! "<<endl;
    }
    virtual void send_message() = 0; //pure virtual function
};

class bifa : public mobileuser
{
public:
    void send_message()
    {
        cout<<"hi, this is Bifa"<<endl;
    }

};

class binoy : public mobileuser
{
public:
    void send_message()
    {
        cout<<"hi, this is Binoy"<<endl;
    }

};

int main()
{
     mobileuser *m;//we can't have any var

     bifa b;
     binoy k;

     m= &b;
     m->call();
     m ->send_message();

     m = &k;
     m->send_message();



     return 0;
}
