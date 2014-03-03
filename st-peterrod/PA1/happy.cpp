//happy
#include <iostream>



using namespace std;

int main()
{
    
  int num;
  int printvec[10]; // initializing the vector that each row of 10 will be passed to
  int base ; 
  int count = 0; //counter for indexing across each row of 10
  int count2 = 0; // counter for checking when we get to 10,000 happy numbers
    
    
  for(int i = 1; 1>0 ; i++)
    {
      int x=0;
      num = i;
      
      while (x != 1 && x != 4)
        {
	  
          
	  while (num != 0)
            {
	      base = num % 10;
	      x += (base*base);
	      num = num/10;
            }
	  if (x != 1 && x != 4) // the reinitializes the sum of the square of the digits until we hit 1 or 4
            { 
	      num = x;
	      x = 0;
	    int  base;
            }
	  else if (x == 1)
            {
	      printvec[count] = i;
	      count++;
	      count2++;
	      
            }
	  if (count == 10)
            {
	      for(int j=0;j< 9;j++)
                {
		  cout << printvec[j] <<" " ;
                }
	      cout << printvec[9]<<" "<< endl;
	      count = 0;
            }
        }
      
      if (count2 == 10001)
        break;
    }
  
    
  return 0;
}

