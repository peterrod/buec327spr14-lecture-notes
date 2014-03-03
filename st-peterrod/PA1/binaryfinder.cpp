//binary

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

	int sequence, testnum, num1, i;
	int j = 0;
	int checkvec[100];

	int bintest = 0; 
	int count = 0;
	int remain;
	int up = 0;

  //First check is the test number is positive

	cin >> testnum >> sequence;

//Now checking if the sequence entered is positive and binary
//this while loops tells me the number or digits in the sequence entered

	int tempseq = sequence;  
	int tempseq2 = sequence;


	while (sequence != 0)
	{
		sequence/=10;
		count++;
	}
//now we initialize the vector and place the digits in elements 0-count-1

	int binvec[count];
	int k = count-1;

	while (tempseq != 0)
	{
		remain= tempseq % 10;
		tempseq/= 10;
		binvec[k] = remain;
		k--;
	}

		//now we test for that all elements in the arrat binvec are binary and if so bintest should equal 1 
		//  via the up counter

	for (i=0;i< count; i++)
	{

		if (binvec[i] == 1 || binvec[i] == 0)
		{
			up++;	
		}
	}

	if (up == count)
	{
		bintest = 1;
	}
	else
		bintest = 0;

		//output the error statements

	if (testnum < 0)
	{
		cout << "Number must be positive "<< endl; 
	}
	
	if (tempseq2 < 0)
	{
		cout << "Sequence must be positive"<< endl;
	}
	if (bintest == 0)
	{
		cout << "Sequence must be binary"<< endl;
	}
	


// the part that checks for binary works but now I have to refine 
	// the sequence finder

}

  const  int limit = testnum;
  // int i =  7;  



	{
		testnum = limit;
		j=0;
		while (testnum >= 2)
		{

			num1=testnum % 2;
			testnum/=2;
			checkvec[j] = num1;
			j++;
		} 
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
	
}


*/






