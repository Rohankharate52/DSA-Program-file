//BS

//Linaerseach........



#include<iostream>
using namespace std;

bool linearseach(int arr[],int X, int index,int N) 
{
    //Base case
    if(index==N)   
    return 0;

    if(arr[index]==X)
    return 1; 

    return linearseach(arr,X,index+1,N) ;

}
int main () 
{
    int arr[] = {2,3,6,7,1,5};
    int X = 7;
    cout<<linearseach(arr,X,0,6)<<endl;

}