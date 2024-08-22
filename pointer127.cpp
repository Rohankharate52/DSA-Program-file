#include<iostream>
using namespace std;

int main () 
{
    //variable ke ly heap memory allocate karo
    int *ptr = new int;
    *ptr =5 ;
    cout<<*ptr<<endl;

    float *ptr2 = new float;

    *ptr2 = 3.6;
    cout<<*ptr2<<endl;

}

//output 
//5
//3.6
