		/*File Name     :Command Line Arguments.cpp
		
		  Author Name   :Mukkara LAkshmi Prasanna
		
		  Created Date  :06-04-2020
		
		  Description   :To know the use of command line arguments with data types
		
		  Requirements  :#include<iostream>,#include<string.h>,#include<stdlib.h>,#include<typeinfo>
		
		*/
		
		
		#include<iostream>
		
		#include<stdlib.h>
		
		#include<string.h>
		
		#include<typeinfo>
		
		using namespace std;
		
		int main(int argc,char **argv)
		
		{
		
			int iNumber_1;
			int iNumber_2;		
			/* Variable declaration*/
		
			float iNumber_3; 
		
			if (argc==1)	
			/*condition checking */
			
				{
			
					cout << " parse.exe" << endl;
			
					cout << " argv[0] datatype1,datatype2,datatype3,....." << endl;
			
				}
			
				else
			
				{
			
			for(iNumber_1=1;iNumber_1<argc;iNumber_1++)
			
			{
			
				iNumber_2=atoi(argv[iNumber_1]);	
			/*function accepts string and converts to integer*/
			
				iNumber_3=atof(argv[iNumber_1]);	
				/*function to convert to a double*/
			
			if(iNumber_2==0)	
			/*condition checks by doing comparision*/
			
			{
			
				if(argv[iNumber_1])	
				{
			
					cout<<"char";	
					/*print character*/
				
					cout<<"\t\t"<<argv[iNumber_1]<< "\t\t"<<strlen(argv[iNumber_1])<<endl;
				
				}
			
				else
			
				{
			
					cout<<"string";	  
					/*prints string*/
				
					cout<<"\t\t"<<argv[iNumber_1]<< "\t\t"<<strlen(argv[iNumber_1])<<endl;
			
				}
			
			}
			
			else
			
			{
			
			if(iNumber_2==iNumber_3)
			
				{
					cout<<"int"<< "\t\t"<<iNumber_2<<"\t\t"<<sizeof(iNumber_2)<<endl;		
					/*prints the size of integer*/
				}
			else
			
				{
					cout<<"float"<< "\t\t"<<iNumber_3<<"\t\t"<<sizeof(iNumber_3)<<endl;	
					/*prints the size of float*/
				}
			}
			
			} 
			
				return 0;
			
			}
			
			}