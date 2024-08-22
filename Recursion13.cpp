
// 6 +sum(5)
// 5 4 3 2 1
//5 +sum(4) 


//
#include<iostream>
using namespace std;

int sum(int n) 
{
    //base case
    if(n==1)
    return 1;

    return n+sum(n-1);

}
int main () 
{
    //sum of first n natural number

    int n=6;
    cout<<sum(n)<<endl;

}