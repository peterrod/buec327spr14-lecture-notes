//perfect
#include <iostream>
using namespace std;



//is perfect is tests to see if a number is perfect
bool is_perfect(long int n)
{
    
    
  // take in n and test to see if the sum of its divisors equals n
  // if they equal n then return true , if they dont equal n return falso
    
  long int sum = 0;
  long int down = n/2;
  while (down >=1)
    {
      if (n % down == 0)
        {
	  sum+=down;
        }
      down--;
    }
    
  if (n == sum)
    {
      return true; // sums are equal to the number and this is perfect number
        
    }
    
  else
    {
      return false; //not a perfect number
    }
        
}

int main()
{
  long int n;
  //ask the user for a number
    
  cout << "Enter a number to test for perfectness: ";
    
  cin >> n;
  
  while (n!=0) 
    {
      if (is_perfect(n))
	// {	
	// while (n!=0)
	{
	  cout << n <<" is perfect"<< endl;
	  cout << "Enter a number to test for perfectness: ";
	  cin >> n;
	}
      // }
      
      else
	// {
	// while(n!=0)
	{
	  cout << n <<" is not perfect" <<endl;
	  cout << "Enter a number to test for perfectness: ";
	  cin >> n;
	}
      //    }
    }
  cout << " Goodbye!\n";
}

