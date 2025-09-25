
#include <iostream>
#include <vector>
using namespace std;

int RandomNumber(int form , int to)
{
	return (rand() % (to - form + 1) + form);
}

void FillingMatrix(int Number[3][3])
{
	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
	        int TakeNumber = RandomNumber(1, 100);
			Number[i][j] = TakeNumber;
	    }

	}
}

void PintMatrix(int Number[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Number[i][j]<< "  ";
		}
		cout << endl;
	}
}
int main() 
{
	srand(time(NULL));

	int Number[3][3];
	FillingMatrix(Number);
	PintMatrix(Number);
}
