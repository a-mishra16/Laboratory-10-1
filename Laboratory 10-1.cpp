/*
* Project: Laboratory 10-1
* Author: Aanika Mishra
* Date: 11-7-2024
* Description: This program intakes a string statement from the user and counts and returns the number of letters.
*/

#include <iostream> 
#include <iomanip>
#include <string>

using namespace std;

int countLetters(string str);

int main()
{
	string quote;

	getline(cin, quote);

	cout << countLetters(quote);


}

int countLetters(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] > 65 && str[i] < 123)
		{
			count++;
		}
	}
	return count;
}