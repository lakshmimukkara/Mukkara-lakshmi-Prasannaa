/* 
filename           :     PrivateInitialization.cpp
Author             :     Lakshmi Prasanna Mukkara  
Date Of creation   :     14/042020
Description        :     The main purpose of this program is to how to use & Declare Different way to initialize the private member variables in a class
Requirements       :     #include<iostream>, #include<string.h>
*/
#include<iostream>
#include<string.h>
using namespace std;
/* class Declaration */
class employee
{
	/* private variables */
    private:  
    int iNO,iAge;
    double dWages;
    public:
    employee() 
	{ 
	  cout<<"Default Constructor Employee is invoked ::"<<endl;
	  /* initialize member variables*/
	   iNO=10;
       dWages=15000;
	   iAge =30;
}
    employee(int iId,double dSal,int iAg)
	{  
	  cout<<"Parameterised Constructor Employee ::"<<endl;
	  iNO= iId;
	  dWages= dSal;
	  iAge= iAg;
	  
}
     /* member functions */
	   public: void init();
	           void display();
    };
    /* using scope resolution operator accessing the private data members */
    void employee ::  init()                                                             
    {
        cout<<endl;
	    cout<<"Using Member Function"<<endl;
        cout<<"Enter Id of the Employee :"<<endl;
        cin>>iNO;
        cout<<"Enter the Salary of the Employee ::"<<endl;
        cin>>dWages;
        cout<<"Enter the Age of the Employee ::"<<endl;
        cin>>iAge;
     }
     /*function name  : display()
       Usage          : display the private members */
    void employee :: display()
    {
    	cout<<"\n";
    	cout<<"Id of the Employee       =        "<<iNO<<endl;
    	cout<<"Salary of the Employee   =        "<<dWages<<endl;
    	cout<<"Age of the Employee      =        "<<iAge<<endl;
}

int main(int argc,char *argv[])
{
    /* help command */
    if(argc == 2 && strcmp(argv[1], "-h")==0)  
   
    { 
    	cout<<"Usage :"<<endl;
        cout<<"Input : Positive Values "<<endl;
    }
    else
    {   
        /* creating object for a class */
        employee e; 
		/* default constructor */  
        e.display();
        e.init();
        /* trying to access private data member directly outside the class */
        e.display();
        /* parameterized constructors */
        employee e1(20,20000,24);
        e1.display();
    }
     return 0;
}