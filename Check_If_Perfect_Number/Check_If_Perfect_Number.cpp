#include <iostream>
using namespace std;

enum enPerfectNotPerfect { Perfect = 1,NotPerfect=0 };

int ReadPositiveNumber()
{
	int N;
	do
	{
		cout << "Please enter a number: ";
		cin >> N;
	} while (N < 0);

	return N;
}

enPerfectNotPerfect CheckIfPerfect(int N)
{
	int Sum = 0;
	for (int i = 1; i < N; i++)
	{
		if (N% i == 0)
		{
			Sum +=i;
			
		}
	}
	if (Sum == N)
	{
		return enPerfectNotPerfect::Perfect;

	}
	else
	{
		return enPerfectNotPerfect::NotPerfect;
	}
}


void PrintPerfectNumber()
{
	int N = ReadPositiveNumber();
	
	if (CheckIfPerfect(N) == enPerfectNotPerfect::Perfect)
	{
		cout << N << " is a Perfect Number.\n";
	}
	else
	{
		cout << N << " is Not a Perfect Number.\n";
	}
	
}

int main()
{
	PrintPerfectNumber();

	return 0;
}