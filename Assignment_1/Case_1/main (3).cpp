/*File Name     :main(3).cpp
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
int im;		//variable declaraion
for(im=0;str.length()==1;im++)		//initializing the value, condition checking,value incremented
{
return true;	
}
}	
int main(int argc,char **argv)
{
int iN;
int iJ;		// Variable declaration
float fh; 
if (argc==1)	//condition checking 
	{
		cout << " parse.exe" << endl;
		cout << " argv[0] datatype1,datatype2,datatype3,....." << endl;
		

	}
	else
	{
	
for(iN=1;iN<argc;iN++)
{
iJ=atoi(argv[iN]);	//function accepts string and converts to integer
fh=atof(argv[iN]);	//function to convert to a double
if(iJ==0)	//condition checks by doing comparision
{
	if(check(argv[iN]))
	{
	cout<<"char";	//print character
	cout<<"\t"<<argv[iN]<< "\t"<<strlen(argv[iN])<<endl;
	}
	else
	{
	cout<<"string";	  //prints string
	cout<<"\t"<<argv[iN]<< "\t"<<strlen(argv[iN])<<endl;
	}
}
else
{
if(iJ==fh)
cout<<"int"<< "\t"<<iJ<<"\t"<<sizeof(iJ)<<endl;		//prints the size of integer
else
cout<<"float"<< "\t"<<fh<<"\t"<<sizeof(fh)<<endl;	//prints the size of float
}
} 
return 0;
}
}
