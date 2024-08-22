#include<iostream>

using namespace std;

int main () 
{
    int a = 10;

    //print the address of a

    int *ptr = &a;

    cout<<ptr<<endl;  //address of a      0x3253252
    cout<<ptr<<endl; // value inside a    10
    

    int b =20 ;   //0x124345345
    ptr = &b;      //20 
    cout<<ptr<<endl;
    cout<<ptr<<endl;
   

   b = 30 ;
   cout<<*ptr<<endl; // 30 
}