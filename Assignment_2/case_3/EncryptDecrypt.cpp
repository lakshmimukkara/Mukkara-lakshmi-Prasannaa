/*Filename       : EncryptDecrypt.EncryptDecrypt
Author           : Lakshmi prasanna Mukkara
Date of creation : 14-05-2020
Description      : Encrypt the data and saved and also decrypt using key
*/
#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
using namespace std;
// Function to replace space with star(*)
void out(string line)
{
	//ofstream is used to write in a file
	ofstream outfile("Encrypt.txt", ios::app);
	for (int k = 0; k < line.length(); k++)

		if (line[k] == ' ')
		{
			line[k] = '*';
		}
	outfile << line << endl;
}
// Function to return the string after
// reversing the individual words
void reverseWords(string file, string key)
{
	//ofstream is used to write in a file
	ofstream outfile("Encrypt.txt", ios::out);
	outfile << key << endl;
	outfile.close();
	//ifstream is used to read the file
	ifstream infile("sample.txt", ios::in);
	string str;
	// Pointer to the first character
	// of the first word
	while (getline(infile, str))
	{
		int start = 0;
		for (int index = 0; index <= str.length(); index++)
		{
			// If the current word has ended
			if (str[index] == ' ' || index == str.length())
			{
				// Pointer to the last character
				// of the current word
				int end = index - 1;

				// Reverse the current word
				while (start < end)
				{
					swap(str[start], str[end]);
					start++;
					end--;
				}

				// Pointer to the first character
				// of the next word
				start = index + 1;
			}
		}
		out(str);
		cout << "...........Encrypted data..........." << endl;
	}
}
void in(string file, string key)
{
	string line;
	//ifstream is used to read the file
	ifstream infile("Encrypt.txt", ios::in);
	infile >> line;
	//ofstream is used to write the file
	ofstream outfile;
	outfile.open("Decrypt.txt");
	if (key == line)
	{
		while (getline(infile, line))
		{
			replace(line.begin(), line.end(), '*', ' ');
			int start = 0;
			for (int index = 0; index <= line.length(); index++)
			{
				// If the current word has ended
				if (line[index] == ' ' || index == line.length())
				{
					// Pointer to the last character
					// of the current word
					int end = index - 1;

					// Reverse the current word
					while (start < end)
					{
						swap(line[start], line[end]);
						start++;
						end--;
					}

					// Pointer to the first character
					// of the next word
					start = index + 1;
				}
			}
			outfile << line;
		}
		infile.close();
		outfile.close();
		cout << "............Decrypted data.........." << endl;
	}
	else
		cout << "Entered wrong key" << endl;
}

// Driver code
int main(int argc, char *argv[])
{
	if ((argc == 2) && strcmp(argv[1], "-h") == 0) //created a help command
	{
		cout << ".........Usage of my program.........." << endl;
		cout << "-d or -e -f textfile -k key" << endl;
	}
	else if ((argc == 6) && strcmp(argv[1], "-e") == 0) //encript calling
	{
		reverseWords(argv[3], argv[5]);
	}
	else if ((argc == 6) && strcmp(argv[1], "-d") == 0) //decript calling
	{
		in(argv[3], argv[5]);
	}
	return 0;
}