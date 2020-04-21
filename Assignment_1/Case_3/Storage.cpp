/*File Name     :StoModLoc.cpp

  Author Name   :lakshmi Prasanna Mukkara

  Created Date  :07-04-2020

  Description   :To know the uses of modifiers,variable scope and storage classes

  Requirements  :#include<iostream>,#include<string.h*>,#include<typeinfo>
*/





#include<iostream>
#include<string.h>
using namespace std;
/*global variable*/
int iGlobal=15;  
/*Extern variable deeclaration*/                        	
int iZ='A'; 
int AutoStorageClass(int a);
int registerStorageClass(register int b);
int externStorageClass(int iValue);
/*variable scope function*/
int VARIABLESCOPE()                        	
{
	/*local variable deeclaration*/
	int iLocal=25;                      	
	cout<<"..................VARIABLE SCOPE............................."<<endl;
	cout<<"                  global variable a:"<<::iGlobal<<endl;   
	cout<<"                 local variable  b:"<<iLocal<<endl;
	cout<<"............................................................."<<endl;
}
int modifier()
{
	int iNum;
	short int a;		
	long int b;			
	unsigned short c;	 
	signed short d;	
	unsigned int e;		
		cout << "enter value: ";
		cin>>iNum;
				a=c=d=b=e=iNum;    
		cout << " ......................Modifiers.................... "<<endl;
		/* values based on modifiers */
		cout << "             short int 		= " << a << endl;        
		cout << "             long int  		= " << b << endl;
		cout << "             unsigned short 	= " << c << endl;
		cout << "             signed short 		= " << d << endl;
		cout << "             unsignes int 		= " << e << endl;

		cout << ".................................................... "<< endl;
} 
int Static() 
{ 
    cout << "For static variables: "; 
    static int count = 0; 
    count++; 
    return count; 
} 
  
/*Function containing non-static variables*/ 
/* memory is destroyed*/ 
int nonStatic() 
{ 
    cout << "For Non-Static variables: "; 
  
    int count = 0; 
    count++; 
    return count; 
} 
class mutabl_e
{
	public :mutabl_e(int V, int L)
	{
		x = V;
		y = L;
	}
	mutable int y;
	int x;
};
int main(int argc,char *argv[])
{
	int a;
	register int b;
	static int p;
	int q;
	int iValue;

    if(argc>=2)
    {
	    if(strcmp(argv[1],"-h")==0)					
	    {
            cout<<"............................USAGE ................................... "<<endl;
            cout<<"Explains the variable scope ,storage class specifiers,modifiers"<<endl;
        
	    }
    }
    else
	{	
		VARIABLESCOPE();
		modifier();
		/* x = 10 and y = 4*/
		const mutabl_e temp(10,4); 
		cout<<".......................Mutable storage..................."<<endl;
		cout << "		x : " << temp.x << " 	y : " << temp.y << endl;	
		/* because 'x' is mutable */
		temp.y = 6; 
		cout << "		x : " <<temp.x << " 	y : " <<temp.y << endl;
		cout <<"........................................................"<<endl;
		cout<<"Enter a value: ";
		cin>>iValue;
		a=b=p=q=iValue;
		cout<<"\n..................Storage Classes....................\n"<<endl; 
	
		/* To demonstrate auto Storage Class*/ 
		AutoStorageClass(a); 
	
		/* To demonstrate register Storage Class */
		registerStorageClass(b); 
	
		/* To demonstrate extern Storage Class */
		externStorageClass(iValue); 
	
		/* To demonstrate static Storage Class */
		/* Calling the static member */
    	cout << Static() << "\n"; 
    	cout << Static() << "\n";  
  		/* Calling the non-static member*/
 		cout << nonStatic() << "\n";  
   		cout << nonStatic() << "\n"; 
		return 0; 
	} 
}
int AutoStorageClass(int a) 
{  
	/* auto int a = 'a'; */
	cout<<" Value of the auto variable : "<<a<<endl; 
	cout<<"--------------------------------"<<endl; 
} 

int registerStorageClass(register int b) 
{ 
	/*  register int b = 'a'; */
	cout<<" Value of the register variable : "<<b<<endl; 
	cout<<"--------------------------------"<<endl;  
} 

int externStorageClass(int iValue) 
{ 

	/* telling the compiler that the variable is an extern variable  */
	extern int iZ; 

	/* print extern variables  */
	cout<<" Value of the extern variable: "<<iZ<<endl; 

	/*  modified extern  */
	iZ = iValue; 

	/* print modified extern */  
	cout<<" Value of the modified extern variable : "<<iZ<<endl; 
	cout<<"--------------------------------"<<endl; 
}