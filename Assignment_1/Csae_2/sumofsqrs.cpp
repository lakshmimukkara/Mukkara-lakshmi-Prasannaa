/*File Name : Sum of Squares of n numbers.cpp
Author      : M .LAkshmi Prasanna
Purpose     : To calculate the sum of squares of a given numbers
Date        : 07/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
/*Function Name : SUMOFSQRS*/
int SUMOFSQRS()
{
	int isum=0;
	int inum;
	/*Variable Declaration*/
	cout<<"Enter a positive number ";
	cin>>inum;
	for(int i=1;i<=inum;++i)
    	{
		
            isum+=i*i;
    	}
 
        	cout<<"Sum="<<isum;
        	/*Prints the output as sum of squares of n numbers*/
}
int main(int argc,char* argv[])
{
	/*Declaring variables we required*/
   	if((argc==2) && (strcmp(argv[1],"-h")==0))
	{               
		{
		  	cout<<"Enter any integer value  "<<endl; 
		}
	}	
	else
	{
		SUMOFSQRS();
	}
}