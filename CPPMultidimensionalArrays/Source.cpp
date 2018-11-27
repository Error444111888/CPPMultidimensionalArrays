#include <iostream>

using namespace std;

int main()
{	//First number is how many rows and second number is how many columns
	// Basically looks at it like "How many arrays? & How many values in each?"
	int Cryptos[4][3] = { {11, 22, 33}, {44, 55, 66}, {77, 88, 99}, {111, 222, 333} };

	/*
	So we can create a table based on the values above and pick one of them to show based on the coordinates we specify

	    0    1    2
	0   11   22   33
	1   44   55   66
	2   77   88   99
	3   111  222  333
	
	
	*/



	cout << Cryptos[3][2] << endl; // <<< This coordinate is to show 333
	cout << Cryptos[0][0] << endl; // <<< This coordinate is to show 11
	cout << "End of this code \n" << endl;


	// How to cout multi dimentional arrays
	int Test[4][3] = { {1, 2, 3}, {11, 22, 33}, {111, 222, 333}, {1111, 2222, 3333} };

	/*
			COLUMN
	    0    1    2
	0   1    2    3
ROW	1   11   22   33
	2   111  222  333
	3   1111 2222 3333
	
	*/

		for (int Row = 0; Row < 4; Row++)
		{
			for (int Column = 0; Column < 3; Column++)
			{
				cout << Test[Row][Column] << " ";
			}

			cout << endl;
		}
	
		
	cin.get();
}