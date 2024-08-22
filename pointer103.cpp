

#include <iostream>
using namespace std;

int main () 
{
    int a = 10 ;
    //print the address of a 
    cout<<&a<<endl;

    //print 
    int *ptr = &a;
    cout<<sizeof(ptr)<<endl; 

    float m = 2.3;
    float *ptr1 = &m;
    cout<<sizeof(ptr1) ; 

}

//size of print ptr etc,,,,