#include<iostream>
#include<cstring> // don't forget this header file!
using namespace std;

int main()
{
    char name1[] = "rubayet";
    char copyname[20];
    char lastname[] = " alam";
    char nickname[] = "Bifa";

   int length= strlen(name1);                           //strlen() function
   cout<<"length of string = "<<length;

   strcpy(copyname,name1);
   cout<< "\nname 2 = "<<copyname <<endl;    //it copies the string

   strcat (name1,lastname);      //string concatenation adds two or more strings
   cout<<name1<<endl;

   strupr(nickname);      //prints BIFA
   cout<<nickname<<endl;

     strlwr(nickname);     //prints bifa
   cout<<nickname<<endl;

   int comparevalue = strcmp  (name1, lastname);
   if (comparevalue == 0)
   {
       cout<<"\nstrings are equal"<<endl; //Bifa = Bifa
   }
   else
   {
       cout<<"\nstrings are not equal "<<endl; // Bifa != bifa
   }


    return 0;
}
