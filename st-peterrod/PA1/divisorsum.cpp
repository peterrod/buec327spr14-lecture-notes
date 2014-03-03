//divisorsum
/*
 Write a C++ program divisorsum.cpp which prints the proper divisor sum of the integers from 2 to 1000, inclusive, one value per line.
 
 The proper divisors of an integer x are all positive divisors of x not including x itself.
 
 Example: the proper divisor sum for 8 is 1+2+4 = 7.
 */

#include <iostream>
using namespace std;

int main()
{

  //take each number and start from the number/2 and see which number from there to 2 gives you 0 for modulo
  //if the number gives you zero for modulo, add that to a running count of numbers and then display that number

  for(int i = 2; i <= 2000; i++)
    {
      int sum = 0;
      int down = i/2;
      while (down >= 1)
	{
	  if (i % down == 0 )
	    {
	      sum+=down;
	    }
	  down--;
	}
    
      cout << sum << endl;
    
    
    }
  return 0;

}
