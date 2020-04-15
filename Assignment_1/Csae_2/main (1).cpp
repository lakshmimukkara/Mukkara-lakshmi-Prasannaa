/*File Name     :Sum of Squares.cpp
  Author Name   :Mukkara Lakshmi Prasanna
  Created Date  :07-04-2020
  Description   :To know the uses of modifiers,variable scope and storage classes
  Requirements  :#include<iostream>
*/

#include <iostream>
using namespace std;
int main(int argc,char **argv)
{

if(argc == 1)	//Condition checks
  {
       cout<<" sum of Squares of 'n' numbers"<<endl;	//Command line argument for -h
 }
	else
	{
		int inum, isum = 0;		//Variable declaration
		cout << "Enter a positive integer: ";	// Enter a positive number
   		 cin >> inum;

                 for (int i = 1; i <= inum; ++i) 
              {
                   isum += i*i;		//Add the Squares of n numbers
              }
    
              cout << "Sum = " << isum;
        }
}

