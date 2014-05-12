//tttwinner
// write a program that reads tic-tac-toe scnearios from a file and determines the status of each game
//

#include <iostream>
#include <fstream>

using namespace std;

int i, j, k;
char cmat[3][3];
int amat[3][3];
int rwinner = 0;
int cwinner = 0; 
int cast;

int main()
{

ifstream input("tictactoeboards.txt");

string ttt;

while (input >> ttt)
	{
	k = 0;
	for (i = 0; i < 3; i++)
	{
		int rowsum = 0;
		for (j = 0; j < 3; j++)
		{
			cmat[i][j]=ttt[k];
			cast = (int)ttt[k];
			//cout << "the ascii value of " <<ttt[k] <<" is "<< cast << endl;
			amat[i][j]=cast;
			rowsum += amat[i][j];

			k++;
		}
	
		if (rowsum/3 == amat[i][j-1])
			{
				rwinner++;
			}	
	}
	cout<< "rwinners is " << rwinner << endl;

//-----------now check the column winners---------------------------

	for (i = 0; i < 3; i++)
		{
			int colsum = 0;
			for (j = 0; j < 3; j++)
			{
			colsum += amat [j][i];
			}
			//cout << "colsum is " << colsum << amat[ <<<<<<<< endl;
			if (colsum/3 == amat[j-1][i])
			{
				cwinner++;
			}	

		}
		cout<< "cwinners is " << cwinner << endl;

	}

return 0;
}



