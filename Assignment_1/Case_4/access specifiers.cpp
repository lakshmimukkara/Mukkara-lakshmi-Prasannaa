/*File Name : Access speifiers.cpp
Author      : M .LAkshmi Prasanna
Purpose     : To calculate the sum of squares of a given numbers
Date        : 07/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
class studentclass1
{
    private:

    /*Access - Specifier*/
   /*Member Variable Declaration*/
   char cname[20];
   int iregNo, isub1, isub2, isub3;
   float ftotal, favg;
   public:

   /*Access - Specifier*/
   /*Member Functions read() and print() Declaration*/

   void read() {
      /*Get Input Values For Object Variables*/
      cout << "Enter Name :";
      cin >> cname;

      cout << "Enter Registration Number :";
      cin >> iregNo;

      cout << "Enter Marks for Subject 1,2 and 3 :";
      cin >> isub1 >> isub2>> isub3;
   }

   void sum() {
      ftotal = isub1 + isub2 + isub3;
      favg = ftotal / 3;
   }

   void print() {
      /*Show the Output*/
      cout << "Name :" << cname << endl;
      cout << "Registration Number :" << regNo << endl;
      cout << "Marks :" << isub1 << " , " << isub2 << " , " << isub3 << endl;
      cout << "Total :" << ftotal << endl;
      cout << "Average :" << favg << endl;
   }
   protected:
        int atnd;
};

class std2:public studentclass1
{
    public:
        void set_atnd(int atnd)
        {
            this->atnd=atnd;
        }
        void print_atnd()
        {
            cout<<"Attendence is:"<<atnd;      
        }
        
};
int main()
{
    studentclass1 stu1;
    cout << "Read and Print Student Information Class Example Program In C++\n";

    cout << "\nStudentClass : Student 1" << endl;
    stu1.read();
    stu1.sum();
    stu1.print();
    std2 s3;
    s3.set_atnd(90) ;
    s3.print_atnd();
}