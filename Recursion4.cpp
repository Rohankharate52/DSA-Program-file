
#include<iostream> 
using namespace std;

//funtion ke sath keya hai......





void fun3(int n) 
{
    //base case
    if(n==0) 
    {
        cout<<"happy birthday\n";
        return ;

    }
    cout<<n<<"days left for birthday\n";
    fun3(n-1);
    
   
}


int main () 
{
    int n = 3;
   

    fun3(8) ;  //you optiuon to change.......
    

}