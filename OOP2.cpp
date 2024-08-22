#include<iostream>
using namespace std;

class Student
{
  public:
  string name;                 //classs
  int age,roll_number;
  string grade;



public:
void setname (string s) 
{
    name=s;

}
void setage(int a) 
{
    age=a;

}
void setroll_number(int r) 
{
    roll_number = r;

}
void setgraade(string s) 
{
    grade =s;
}
 void getname() 
 {
    cout<<name<<endl;
 }
};
int main () 
{ 

    Student S1;
    S1.setname("Rohit");
    S1.setage(10);
    S1.setroll_number(21);
    S1.getname="A+";

}
