
// pass by pointer ahe aata...........................................................


#include<iostream>
using namespace std; 

void swapping (int &p1,int &p2)      //[[pass by reference ahe ]]
{
    int temp= p1;
    p1 = p2; 
    p2= temp;
          // 

}


int main()  
{
   int first = 10, second = 20;

    swapping (first,second);         //
    cout<<first<<" "<<second;

}