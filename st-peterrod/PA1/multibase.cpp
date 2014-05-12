
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  
  int test, testnum, num1, i, k ;
  int j = 0;
  int checkvec[100];
  
  cout << "Enter the number to test for palindromicity: ";
  cin >> testnum;
  const  int limit = testnum;
  // int i =  7;  
  
  for ( i=2; i < limit; i++)
    
    {
      
      testnum = limit;
      j=0;
      while (testnum >= i)
	{

	  num1=testnum % i;
	  testnum/=i;
	  checkvec[j] = num1;
	  j++;
	  
	}
      checkvec[j] = testnum;
      int end = j;
      int start = 0;
      int newvec[j+1];
      while(start <= j) 
	    {	  
	      newvec[start] = checkvec[end];
	      start++;
	      end--;
	    }
      test = 1;
      for ( k=0; k <= j;k++)
	{
	  if(newvec[k] != checkvec[k] )     
	    {
	      
	      test = 0;	      
	    }
	}	
     
      if (test == 1)
	{
	  cout << i << endl; 
	}
    
	}
}

