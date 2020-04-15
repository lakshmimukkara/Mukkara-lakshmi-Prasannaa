/*File Name     :Datatypes.cpp
  Author Name   :Mukkara LAkshmi Prasanna
  Created Date  :06-04-2020
  Description   :To know the us
  Requirements  :#include<iostream>,#include<string.h>,#include<stdlib.h>,#include<typeinfo>
*/


#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool check(string str)
{
int iNumber;		//variable declaraion
for(iNumber=0;str.length()==1;iNumber++)		//initializing the value, condition checking,value incremented
{
return true;	
}
}	
int main(int argc,char **argv)
{
int iNum;
int iNum1;		// Variable declaration
float fNUMB; 
if (argc==1)	//condition checking 
	{
		cout << " parse.exe" << endl;
		cout << " argv[0] datatype1,datatype2,datatype3,....." << endl;
		

	}
	else
	{
	
for(iNum=1;iNum<argc;iNum++)
{
iNum1=atoi(argv[iNum]);	//function accepts string and converts to integer
fNUMB=atof(argv[iNum]);	//function to convert to a double
if(iNum1==0)	//condition checks by doing comparision
{
	if(check(argv[iNum]))
	{
	cout<<"char";	//print character
	cout<<"\t"<<argv[iNum]<< "\t"<<strlen(argv[iNum])<<endl;
	}
	else
	{
	cout<<"string";	  //prints string
	cout<<"\t"<<argv[iNum]<< "\t"<<strlen(argv[iNum])<<endl;
	}
}
else
{
if(iNum1==fNUMB)
cout<<"int"<< "\t"<<iNum1<<"\t"<<sizeof(iNum1)<<endl;		//prints the size of integer
else
cout<<"float"<< "\t"<<fNUMB<<"\t"<<sizeof(fNUMB)<<endl;	//prints the size of float
}
} 
return 0;
}
}
