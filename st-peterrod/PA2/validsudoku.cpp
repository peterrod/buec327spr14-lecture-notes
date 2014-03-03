

	#include <iostream>
	#include <fstream>

	using namespace std;

	int main()
	{

		ifstream input("sudokuboard.txt");

		int i, j ,k;
		int skmat[9][9];
		int count = 0;
		int number;

	//input >> number
		int storevec[9];
		i = 0;
		while (input >> number)
		{
			storevec[i] = number;
			cout << number << endl;
			i++;

		}

	//this for loop breaks each number in storvec and seperates the digit
	// and places each digit in a corresponding row in a 2 dim newmatay
	//called skmat


		for (i=0; i < 9; i++)
		{
			j=8;
			int check = storevec[i];
			while (check != 0)
			{
				skmat[i][j] = check % 10;
				check/=10;
				j--; 
			}

		//cout << skmat[i][0]<<skmat[i][1]<<skmat[i][2]<<skmat[i][3]
		//	 << skmat[i][4]<<skmat[i][5]<<skmat[i][6]<<skmat[i][7]
		//	 <<	skmat[i][8]<< endl;

		}


	// this zeros matric will be changed to ones when their element  (=skmat[i][j]) is found, if there is a unique
	// 1-9 all elements in zeros will be changed to 1 and we can use a counter to compare the sum of thoe

		int zeros[9][9];

		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				zeros[i][j]=0;
			}
		}

		for(i = 0; i < 9; i++)
		{	
			for(j = 0; j < 9; j++)
			{

				zeros[i][skmat[i][j]-1]=1;
			}
		}

	// The following loop checks that the rows have numbers 1-9.
	int totsrow = 0;  // this keep track of how many rows have 1-9 unique
	int unicount;
	for(i = 0; i < 9; i++)
	{	
		unicount = 0;
		for(j = 0; j < 9; j++)
		{
			if (zeros[i][j] == 1)
			{
				unicount++;
			}

		}
		if (unicount == 9)
		{
			totsrow++;
		}

	}	

	// --------Now we are checking all the columns have numbers 1-9------------------------------------------------

	for(i = 0; i < 9; i++)
	{	
		for(j = 0; j < 9; j++)
		{
					//cout <<
			zeros[skmat[j][i]-1][i]=0;
		}
	}

	// The following loop checks that the rows have numbers 1-9.
	int totscol = 0; //this keeps track of how many columns have 1-9 unique
	for(i = 0; i < 9; i++)
	{	
		unicount = 0;
		for(j = 0; j < 9; j++)
		{
			if (zeros[j][i] == 0)
			{
				unicount++;
			}

		}
		if (unicount == 9)
		{
			totscol++;
		}

	}	

	//--------------------------- This provides the 3x3 box check--------------------------------
	int startrow = 0;
	int endrow = 3;
	int startcol = 0;
	int endcol = 3;
	int sum = 0; int prod = 1;
	int rowcount;
	int totc;
	int shiftrc =0;
	int totsbox = 9;

	while (totc != 81)
	{

		if (totc == 27)
		{
			cout << "totc is now 27" << endl;
			startrow = 3;
			endrow = 6;
			startcol =0;
			endcol =3;
		}
		if (totc == 54)
		{
			cout << "totc is now 54" << endl;
			startrow = 6;
			endrow = 9;
			startcol =0;
			endcol =3;
		}
		for (i = startrow; i < endrow; i++)
		{

			for (j = startcol; j < endcol; j++)
			{
				sum+=skmat[i][j];
				prod*=skmat[i][j];
				totc++;
			}
			rowcount++;
		}
		startcol+=3;
		endcol+=3;

		cout << "the sum and prod at " << i << " "<< j << " are " << sum << " "<< prod << endl;
		
		if(sum != 45 && prod !=362880)
		{
			totsbox--;
		}
		cout << "totsbox is " << totsbox << endl; 
		sum = 0;
		prod = 1;


	}

	if (totsrow != 9 )
	{
		cout << "invalid row" << endl;
	}
	else if (totscol != 9 )
	{
		cout << "invalid col " << endl;
	}
	else if (totsbox != 9 )
	{
		cout << "invalid box" << endl;
	}
	return 0;
	}




