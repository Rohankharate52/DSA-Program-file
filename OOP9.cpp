

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
    void display () 
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl; 
    }
};
int main () 
{
    Customer A1,A2,A3;
    A1.display();
    A2.display() ;
    A3.display () ;

}