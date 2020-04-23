#include<iostream>
#include<string.h>

using namespace std;

class Scholar{
private:
    int *iROL_NO;
    char cNAME[20];
public:
    Scholar()
    {
        cout<<"Constructor is Invoked"<<endl;
        /*allocating memory*/
        iROL_NO =new int;
        *iROL_NO=0;
        *cNAME='\0';
    }
    Scholar(int i_no,char cname[20])
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
        iROL_NO=new int;
        *iROL_NO=i_no;
        strcpy(cNAME,cname);
    }
    /* copy constructor  */
    Scholar(const Scholar& ob)
    {
        /*delete iRoll_no;*/
        iROL_NO=new int;
        strcpy(cNAME,ob.cNAME);
        /*copying variables*/
        *iROL_NO=*ob.iROL_NO;
    }

/*Function Name :Assign_Value
  Parameters    :int*,char
  Return Type   :no return type
  Usage         :to assign value to private variables*/

    void Assign_Value(int ino,char cname[])
    {
        iROL_NO=new int;
        *this->iROL_NO=ino;
        strcpy(cNAME,cname);
    }

/*Function Name :display
  Parameters    :no parameters
  Return Type   :no return type
  Usage         :to display private variables*/

    void display()
    {
        cout<<"RollNo:"<<*iROL_NO<<endl<<"Name:"<<cNAME<<endl;
        cout<<endl;
    }
    /* Assignment operator overloading */
    void operator=(const Scholar& ob);
    /* destructor */
    ~Scholar()
    {
        cout<<"Deallocating Memory"<<endl;
    }
};
void Scholar::operator=(const Scholar& ob)
{
    if (&ob != this)
    {
        strcpy(cNAME,ob.cNAME);
        /* deleting previous memory */
        delete iROL_NO;
        iROL_NO=new int;
        iROL_NO=ob.iROL_NO;
    }
}
int main(int argc,char* argv[])
{
    if(argc==2)
    {
        /*created a help command*/
        if(strcmp(argv[1],"-h")==0)
        {
            cout<<"Enter given Inputs"<<endl;
        }
    }
    else
    {
        int iRo_no;
        char cNAME_Scholar[50];
        Scholar* S1=new Scholar();
        S1->display();
        Scholar* S2=new Scholar(10,"LAKSHMI MUKKARA");
        S2->display();

        /*copy constructor is invoked*/

        Scholar *S3=new Scholar(*S2);
        cout<<"After using copy constructor"<<endl;
        S3->display();
        cout<<"Enter Roll_No:";
        cin>>iRo_no;
        cout<<"Enter Name less than 50 characters:";
        cin>>cNAME_Scholar;
        S2->Assign_Value(iRo_no,cNAME_Scholar);
        cout<<"After performing copy and assingning different values"<<endl;
        S3->display();
        S2->display();
        cout<<"Assignment Operator is Invoked"<<endl;
        S2=S3;
        S3->~Scholar();
        S2->display();
        S3=S1;
        cout<<"After performing assingnment operation"<<endl;
        S3->display();
        S2->display();
    }
    return 0;
}
