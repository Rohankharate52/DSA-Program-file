

#include<iostream>
using namespace std;

class Customer 
{
    string name ;
    int account_number;
    int balance;

    public :
    //default construtor
    Customer() 
    {
     name = "rohan";
     account_number = 5;
     balance = 100;


    }
    //parameterzied constrotor
    Customer (string a,int b,int c) 
    {
        name =a ;
        account_number = b;
        balance = c;

    }
    Customer (string a,int b) 
    {
        name =a ;
        account_number =b ; 

    }
    void display () 
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl; 
    }
};
int main () 
{
    Customer A1;
    Customer A2("rohit",23,1000); 
    Customer A3("Mohit",34)
    A1.display();
    A2.display() ;
    A3.dispaly () ;

}