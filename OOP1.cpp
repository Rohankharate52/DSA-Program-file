#include<iostream>
using namespace std;

class Student
{
  public:
  string name;                 //classs
  int age,roll_number;
  string grade;

};

int main () 
{
    Student S1;
    S1.name = "rohan";
    S1.age =10;
    S1.roll_number = 21;
    S1.grade = "A";

    cout<<S1.age<<" ";


    Student S2;
    S2.name = "mohite";
    S2.age = 12;
    S2.roll_number = 121;        //object..
    S2.grade = "B+";
    cout<<S2.name<<" ";
}