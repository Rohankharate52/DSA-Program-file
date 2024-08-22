#include<iostream>

using namespace std;

int main () 
{
    int a = 10;

    //print the address of a

    int *ptr = &a;

    cout<<ptr<<endl;  //address of a
    cout<<ptr<<endl; // value inside a 
    
}