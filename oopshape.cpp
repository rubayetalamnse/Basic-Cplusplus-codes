#include<iostream>
using namespace std;

 class shape
 {
 public :
    double dim1, dim2;

    shape (double dim1,double  dim2) // constructor has same var as class var
    {

        this -> dim1 = dim1;    //so we use scope resolution
         this -> dim2 = dim2;
    }

     virtual double area() //we are going to override this function, so we need to use "virtual"
    {
        return 0;
    }

 };

 class triangle : public shape
 {

     //automatically dim1, dim2, area() has come here
 public:

    triangle(double dim1, double dim2)                //constructor
    : shape(dim1, dim2)   //initializing constructor, calling from superclass
    {

    }

    double area() //function overriding
    {
        return 0.5*dim1*dim2;
    }

 };

 class rectangle : public shape
 {

     //automatically dim1, dim2, area() has come here
 public:

    rectangle(double dim1, double dim2)                //constructor
    : shape(dim1, dim2)   //initializing constructor
    {

    }

    double area() //function overriding
    {
        return  dim1*dim2;
    }

 };

 int main()
 {
     shape *p;
     triangle       t(10,20);
     rectangle      r(20,40);

     p = &t;
     cout<<"triangle area = "<< p ->area();

     p = &r;
         cout<<"\nrectangle area = "<< p ->area()<<endl ;

 }

