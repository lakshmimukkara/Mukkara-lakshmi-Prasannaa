/*File Name     :main(4)
  Author Name   :lakshmi Prasanna Mukkara
  Created Date  :07-04-2020
  Description   :To know the uses of modifiers,variable scope and storage classes
  Requirements  :#include<iostream>,#include<string.h*>,#include<typeinfo>*/

#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;

unsigned iNum=75;    //unsigned global variable intially holds 75
signed int iNum1=90; //signed int initially holds 90

/*Function Name :test_function_storage
  Parameters    :no parameter
  Return Type   :no return type
  Usage         :to know the accessibility of storage classes*/

void test_function_storage()
{
    auto Auto_Num="NEW";   //automatic variable
    long double fCount;         //long double modifier
    cout<<"Enter the double value:";
    cin>>fCount;
    static int iStatic_Num;    //static variable, initially holds 0
    register int iRegister_Num;    //register variable, always starts freshly
    cout<<"Enter the Register variable:";
    cin>>iRegister_Num;
    iStatic_Num=iStatic_Num+iRegister_Num*2;
    for(int iStart=0;iStart<fCount;iStart++)
    {
        iStatic_Num++;//it only increments,it contains value where it is left till the end of program
    }
    cout<<endl;
    cout<<"Global Variables:"<<endl;
    cout<<"Global   = "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;
    cout<<"Second Global Variable = "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
    cout<<endl;
    cout<<"Storage classes"<<endl;
    cout<<"Static   = "<<iStatic_Num<<" "<<"Size:"<<sizeof(iStatic_Num)<<endl;
    cout<<"Register = "<<iRegister_Num<<" "<<"Size:"<<sizeof(iRegister_Num)<<endl;
    cout<<"Auto = "<<Auto_Num<<'\t'<<"Type ="<<typeid(Auto_Num).name()<<endl;
    cout<<"Double Value:"<<fCount<<" "<<"Size of Double:"<<sizeof(fCount)<<endl;
    cout<<endl;
}

/*Function Name :type_modifiers
  Parameters    :no parameter
  Return Type   :no return type
  Usage         :to know the accessibility of different modifiers with variable scope*/

void type_modifiers()
{
    unsigned iNum;  //if it was not given with correct sign it gives garbage value
    cout<<"Enter a unsigned Number:";
    cin>>iNum;
    signed int iNum1;
    cout<<"Enter signed number:";
    cin>>iNum1;
    test_function_storage();
    cout<<endl;
    cout<<"Local variables"<<endl;
    cout<<"Global Variable in function = "<<iNum<<" "<<"Size:"<<sizeof(iNum)<<endl;//size is always same for integer variables
    cout<<"Second Global Variable in function = "<<iNum1<<" "<<"Size:"<<sizeof(iNum1)<<endl;
    cout<<endl;
}

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     //created a help command
        {
            cout<<"Just enter different values as mentioned and observe the output"<<endl;
        }
    }
    else
    {
        test_function_storage();
        type_modifiers();
    }
    return 0;
}
