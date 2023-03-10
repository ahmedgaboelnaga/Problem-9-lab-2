#include<iostream>

using namespace std;

int main()
{
	int firstscore, secondscore, thirdscore, sum;

	cout << "Enter the first score: ";
	cin >> firstscore;

	cout << "Enter the second score: ";
	cin >> secondscore;

	cout << "Enter the third score ";
	cin >> thirdscore;

	if (firstscore > secondscore && firstscore > thirdscore)
	{
		if (secondscore < thirdscore)
		{
			sum = firstscore + thirdscore;
		}
		else
		{
			sum = firstscore + secondscore;
		}
	}
	else if (secondscore > firstscore && secondscore > thirdscore)
	{
		if (firstscore < thirdscore)
		{
			sum = secondscore + thirdscore;
		}
		else
		{
			sum = secondscore + firstscore;
		}
	}
	else if (thirdscore > firstscore && thirdscore > secondscore)
	{
		if (firstscore < secondscore)
		{
			sum = thirdscore + secondscore;
		}
		else
		{
			sum = thirdscore + firstscore;
		}
	}
	
	cout << "The sum is: " << sum;
}