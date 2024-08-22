

#include<iostream>
using namespace std; 

void swapping (int p1,int p2) //[[pass by value]]
{
    int temp= p1;
    p1 = p2;
    p2= temp;
    cout<<p1<<" "<<p2<<endl;      // 20 10 

}


int main()  
{
    int first = 10 , second =20;
    //cout<<first<<endl;
    swapping (first,second);        //10 20 
    cout<<first<<" "<<second;

}