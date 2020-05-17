/*Filename       : Possible Words of phone.cpp

Author           : Lakshmi prasanna Mukkara

Date of creation : 09-05-2020

Description      : Print the possible words of give numbers of phone keypad

*/


#include <iostream>

#include <string.h>

using namespace std;



const char ckeypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",

							"pqrs", "tuv", "wxyz"};

/* keypad stores all characters that correspond to digit in phone */



void printWords(int inumber[], int iCurr_digit, char cOutput[], int iN)

/* recursive function to print all possible words that can be obtained by input number[] of size n & the output words are one by one stored 

 in output[] */

{

	int index;



	if (iCurr_digit == iN)

	/* if current output word is prepared */

	{

		cout << cOutput << " ";

		return;

	}



	for (index = 0; index < strlen(ckeypad[inumber[iCurr_digit]]); index++)

	/*Try all 3 possible characters for current digir in number[]  and recur for remaining digits */

	{

		cOutput[iCurr_digit] = ckeypad[inumber[iCurr_digit]][index];

		printWords(inumber, iCurr_digit + 1, cOutput, iN);

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
		cout <<"... Print the possble combinations of different numbers ..."<<endl; 
        	cout<<" ...Here i entered 2 and 3..."<<endl;
	    	cout<<" ______________________________"<<endl;
	    	cout<<" |    1   |  2(abc)  | 3(def) |"<<endl; 
	    	cout<<" |________|__________|________|"<<endl;
	    	cout<<" | 4(ghi) |  5(jkl)  | 6(mno) |"<<endl; /* This is the format of keypad  phone */
	    	cout<<" |________|__________|________|"<<endl;
       	    	cout<<" | 7(pqrs)|  8(tuv)  |9(wxyz) |"<<endl;
            	cout<<" |________|__________|________|"<<endl;
            	cout<<" |    *   |    0     |   #    |"<<endl; 
            	cout<<" |________|__________|________|"<<endl;
	    	cout << "The output character formed is : \n";
	    	int iN = sizeof(inumber) / sizeof(inumber[0]);
	    	printWords(inumber, iN);
	    	return 0;
        }

}
