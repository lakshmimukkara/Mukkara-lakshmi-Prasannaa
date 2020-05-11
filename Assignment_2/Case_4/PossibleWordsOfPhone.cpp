#include <iostream>
#include <string.h>
using namespace std;

const char ckeypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
							"pqrs", "tuv", "wxyz"};
/* keypad stores all characters that correspond to digit in phone */

void printWords(int inumber[], int iCurr_digit, char iOutput[], int iN)
/* recursive function to print all possible words that can be obtained by input number[] of size n & the output words are one by one stored 
 in output[] */
{
	int i;

	if (iCurr_digit == iN)
	/* if current output word is prepared */
	{
		cout << iOutput << " ";
		return;
	}

	for (i = 0; i < strlen(ckeypad[inumber[iCurr_digit]]); i++)
	/*Try all 3 possible characters for current digir in number[]  and recur for remaining digits */
	{
		iOutput[iCurr_digit] = ckeypad[inumber[iCurr_digit]][i];
		printWords(inumber, iCurr_digit + 1, iOutput, iN);
		if (inumber[iCurr_digit] == 0 || inumber[iCurr_digit] == 1)
			return;
	}
}
void printWords(int inumber[], int iN)
/*   printWords().  It creates an output array and calls printWords()*/
{
	char result[iN + 1];
	result[iN] = '\0';
	printWords(inumber, 0, result, iN);
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
		int inumber[] = {2, 3};
		cout << "The output character formed is : \n";
		int iN = sizeof(inumber) / sizeof(inumber[0]);
		printWords(inumber, iN);
		return 0;
	}
}