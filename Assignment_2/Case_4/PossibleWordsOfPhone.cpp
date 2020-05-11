#include <iostream>
#include <string.h>
using namespace std;

const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
							"pqrs", "tuv", "wxyz"};
/* keypad stores all characters that correspond to digit in phone */

void printWords(int number[], int curr_digit, char output[], int n)
/* recursive function to print all possible words that can be obtained by input number[] of size n & the output words are one by one stored 
 in output[] */
{
	int i;

	if (curr_digit == n)
	/* if current output word is prepared */
	{
		cout << output << " ";
		return;
	}

	for (i = 0; i < strlen(keypad[number[curr_digit]]); i++)
	/*Try all 3 possible characters for current digir in number[]  and recur for remaining digits */
	{
		output[curr_digit] = keypad[number[curr_digit]][i];
		printWords(number, curr_digit + 1, output, n);
		if (number[curr_digit] == 0 || number[curr_digit] == 1)
			return;
	}
}
void printWords(int number[], int n)
/*   printWords().  It creates an output array and calls printWords()*/
{
	char result[n + 1];
	result[n] = '\0';
	printWords(number, 0, result, n);
}
int main(int argc, char *argv[])
{
	/*Declaring variables we required*/
	if ((argc == 2) && (strcmp(argv[1], "-h") == 0))
	{
		{
			cout << "Enter any integer value  " << endl;
		}
	}
	else
	{
		int number[] = {2, 3};
		cout << "The output character formed is : \n";
		int n = sizeof(number) / sizeof(number[0]);
		printWords(number, n);
		return 0;
	}
}