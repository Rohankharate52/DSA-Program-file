

#include<iostream>
using namespace std;

class Student
{
  private: 
  string name;                 //classs
  int age,roll_number;
  string grade;

//fuction getter and setter 
public : 
void setname (string s) 
{    
    if (s.size() ==0)
    {
        cout<<"invalid name:";
        return ; 
    }
    name=s;

}

void setage (int  a) 
{  
    if(age<0||age>100)
    {
        cout<<"invalid age: ";
        return ; 
    }
    age=a;;
    
}
void setroll_number(int  r) 
{
    roll_number=r;
    
}
void setgrade(string s) 
{
    grade=s;
    
}

void getname () 
{
    cout<<name<<endl;
}


void getage () 
{
    cout<<age<<endl;
}

int getroll_number()
{
    return roll_number;
}

string get_grade(int pin) 
{
    if(pin==123) 
    return grade;

    return " ";  

}

};

int main () 
{
    Student S1;
    S1.setname("rohan");
    S1.setage(10) ;
    S1.setroll_number(21);
    S1.setgrade("A");

   S1.getname(); 
   S1.getage();
   cout<<S1.getroll_number()<<endl;


   cout<<S1.get_grade(123 )<<endl;
   

}