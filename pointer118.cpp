


#include<iostream>
using namespace std;

int main () 
{
    int n = 10; 
    int *p = &n;
    int **p2 = &p ;
    int ***p3 = &p2;

    //cout<<p<<endl;
    //cout<<&p<<endl;
    //cout<<p2<<endl;
    //cout<<&p2<<endl;
    //cout<<p3<<endl;
    //value ko modify karna jo n main rakhi hai ....
    ***p3 = *** p3 = 10 ;
    cout<<p<<endl;
    
}