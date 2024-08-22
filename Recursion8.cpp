




#include <iostream>
using namespace std;

void print ( int N) 
{
    // base case


if (N==1)
{
    cout<<1<<endl;
    return ;

}
  print(N-1) ;

    cout<<N<<endl; 
   

}

int main () 
{
    //print number form 1 to N
    int N;
    cin>>N;
    print (N); 


}
    //output 

// 8 

// 1 2 3 4 5 6 7 8 


    
