




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

    cout<<N<<endl; 
     print(N-1) ;
   

}

int main () 
{
    //print number form 1 to N
    int N;
    cin>>N;
    print (N); 


}
    //output 

// 8 reverse number .........///////////////


// 8 7 6 5 4 3 2 1 


    
