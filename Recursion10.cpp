#include<iostream>
using namespace std;

void printeven(int num, int N) 
{
    if(num == N) 
    {
        cout<<num;
        return ;

    }
    cout<<num<<" ";
    printeven(num+2,N);  

}

int main () 
{
    //print even number form 1 to N
    int N;
    cin>>N;
    if(N%2==1) 
    N--;
    printeven(2,N);   

}

//OUTPUT 

//11
//2  4 6 8 10 
