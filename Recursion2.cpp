
#include<iostream> 
using namespace std;

//funtion ke sath keya hai......


void fun0(int n) 
{
    cout<<"happy  birthday\n"; 
}

void fun1(int n) 
{
    cout<<n<<"day left for birthday\n";
    fun0(0);
}


void fun2(int n) 
{
    cout<<n<<"day left for birthday\n";
    fun1(n-1);

}


void fun3(int n) 
{
    cout<<n<<"day left for birthday\n";
    fun2(n-1);
}


int main () 
{
    int n = 3;
   

    fun3(3) ;
    

}