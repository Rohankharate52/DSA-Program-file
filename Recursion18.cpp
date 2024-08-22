
#include<iostream>
using namespace std;
//using loop for 
void print (int arr[],int index , int n) 
{
    if (index==0) 
    return ;

    cout<<arr[index]<<" ";  //revese kar dena neche nikha to ...
    print(arr,index+1,n) ;


}
int main () 
{
    int arr[] = { 3,4,1,2,8};
  
    print(arr,0 ,5) ;  

}