#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
 srand(time(0));    //time(0) will return the current second count, prompting the srand() function to set a different seed for the rand() function each time the program runs.

  for (int x = 1; x <= 10; x++)
  {
    cout <<  rand() % 6 +1<< endl;
  }
  return 0;
}
