
//factoral find hoto ....................

   
#include<iostream>
using namespace std;

int fact(int n)  
{
    //base case
    if(n==1|| n==0)
    return 1;

    return n*fact(n-1);
}

int main () 
{
    //factorial of a number n
    int n;
    n= 6;
    if(n<0) 
    {
        cout<<"factoral is not possible\n";
        return 0;

    }
    cout<<fact(n);

}