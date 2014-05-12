#include <iostream>

using namespace std;
int main()
{

  /* The algorithm is as follows
        1. initialize a vector that contains four spots for the filled quadruplet
        2. initialize a varible to increment each time the consecutive loop is fufilled and allows the 
        user to access the 4 spots in the vector
        3. initialize a counter to test when the vector is full and initialize the 1st round variable
        4. Begin with while loop to see whether the amount in the vector is less thant he counter
        5. if so enter the while loop and test to see if the latter entered number is +1 the prior number and test with if loop
        6. the else will just initialize the 1st place in the vector and start over also initializing the counters back to the base.  */
    
  int mylist[4] = {0,0,0,0};
  int num1;
  int count = 1;
  int num0;
  cout << "Enter an integer: ";
  cin >> num0;
  int i = 0;
    
  mylist[0] = num0;
   
  while (count < 4)
    {
      cout << "Enter an integer: " ;
      cin >> num1;
        
      if (num1 == mylist[i]+1) //why cant this be (num1 = mylist[i]+1) or does it have to be ((num1 == mylist[i]+1))
        {
	  i++;
        
	  mylist[i] = num1;
	  count++;
        }
      else
        {
	  count = 1 ;
	  i=0;
	  mylist[0]=num1;
        }
    }
    
  cout << "Quadruplet found: " << mylist[0]<<" " << mylist[1]<<" " << mylist[2]<<" " << mylist[3] << endl;
 


  //testing for the end of file
 // cin.eof()



 return 0;

    
    
    
}
