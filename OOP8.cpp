

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
        cout<<"Hello Construtor\n";

    }
};
int main () 
{
    Customer A1;
}