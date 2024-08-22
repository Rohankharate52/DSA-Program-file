

#include <iostream>
using namespace std;

void print (int num , int N) 
{
    // base case


    if (num==N) 
    {
        cout<<num<<endl;
        return ;

    }
    cout<<num<<endl; 
    print (num+1,N);

}

int main () 
{
    //print number form 1 to N
    int N;
    cin>>N;
    print (1,N); 


}
    

    //output   .........


    //7 

    //1 2 3 4 5 6 7 .....................

    
