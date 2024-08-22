#include<iostream>
using namespace std;
void print (int n) 
{

    //base case
    if(n==2)
    {
        cout<<2<<endl;
        return ;

    }
    cout<<n<<endl;
    print(n-2);

    
}
int main () 
{
    //print n t0 1
    int n=10;
  
    print(n);
    
}