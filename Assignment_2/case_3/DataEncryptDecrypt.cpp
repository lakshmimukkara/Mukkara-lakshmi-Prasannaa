/*Filename       : DataEncryptDecrypt.cpp
Author           : Lakshmi prasanna Mukkara
Date of creation : 19-05-2020
Description      : Encrypt the data and saved and also decrypt using key
*/
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class DataEncDec
{
  public:
	string filename, key;
	void encrypt(char *Filename);
	void decrypt(char *key);
};
void DataEncDec::encrypt(char *Filename)
{
	string str;
	ifstream myfile;
	/*ifstream is used to read the file*/
	myfile.open("sample.txt");
	/*filename to encrypt the data */
	ofstream outfile;
	/*ofstream is used to write in a file*/
	outfile.open("encrypt.txt");
	outfile << key << Filename << endl;
	while (getline(myfile, str))
	/* pointer to the first character of the first word*/
	{
		int start = 0;

		for (int ind = 0; ind <= str.size(); ind++)
		{
			if (str[ind] == ' ' || ind == str.size())
			/* If the current word has ended*/
			{
				int end = ind - 1;
				/* Pointer to the last character of the current word*/
				while (start < end)
				/* Reverse the current word*/
				{
					swap(str[start], str[end]);

					start++;

					end--;
				}
				start = ind + 1;
				/* Pointer to the first character of the next word */
			}
		}
		for (int line = 0; line < str.length(); line++)

			if (str[line] == ' ')
			{
				str[line] = '*';
			}
		/* space(' ') has been replaced with star(*) */
		outfile << str << endl;
		cout << "  Data has been encrypted from sample file  ";
	}
	myfile.close();
	outfile.close();
}
void DataEncDec::decrypt(char *key)
{
	string str;
	ifstream myfile;
	/*ifstream is used to read the file*/
	myfile.open("encrypt.txt");
	/*filename to encrypt the data */
	ofstream outfile;
	/*ofstream is used to write in a file*/
	outfile.open("decrypt.txt");
	getline(myfile, str);
	if (key == str)
	/* If key matches then we can decrypt the file*/
	{
		while (getline(myfile, str))
		/* pointer to the first character of the first word*/
		{
			int start = 0;
			for (int ind = 0; ind <= str.size(); ind++)
			{
				if (str[ind] == '*' || ind == str.size())
				/* If the current word has ended*/
				{
					int end = ind - 1;
					/* Pointer to the last character of the current word*/
					while (start < end)
					/* Reverse the current word*/
					{
						swap(str[start], str[end]);

						start++;

						end--;
					}

					start = ind + 1;
					/* Pointer to the first character of the next word */
				}
			}
			for (int line = 0; line < str.length(); line++)

				if (str[line] == '*')

				{
					str[line] = ' ';
				}
			/* star(*) has been replaced with space(' ') */
			outfile << str;
			cout << "  Data has been decrypted from encrypted file  ";
		}

		myfile.close();
		outfile.close();
	}
	else
		cout << " Sorry Key did not match.Try again " << endl;
}
int main(int argc, char *argv[])
{
	DataEncDec object;
	if ((argc == 2) && (strcmp(argv[1], "-h") == 0))
	{
		cout << " Use my program by following these commands " << endl;
		cout << "Press -e/-d  -f  [filename]  -k  [key]" << endl;
		cout << "Press -e/-d  -k  [key]  -f  [filename]" << endl;
	}
	else
	{
		if (strcmp(argv[1], "-e") == 0)
		{
			if ((strcmp(argv[3], "-f") == 0) && (strcmp(argv[6], "-k") == 0))
			{
				object.encrypt(argv[7]);
			}
			if ((strcmp(argv[3], "-k") == 0) && (strcmp(argv[6], "-f") == 0))
			{
				object.encrypt(argv[4]);
			}
		}
		else if (strcmp(argv[1], "-d") == 0)
		{
			if ((strcmp(argv[3], "-f") == 0) && (strcmp(argv[6], "-k") == 0))
			{
				object.decrypt(argv[7]);
			}
			if ((strcmp(argv[3], "-k") == 0) && (strcmp(argv[6], "-f") == 0))
			{
				object.decrypt(argv[4]);
			}
		}
		else
			cout << "Please enter -h to know the usage of my code" << endl;
	}
}
