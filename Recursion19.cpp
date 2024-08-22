

#include<iostream>

using namespace std;

void print(int arr[],int index) 
{
    if(index==-1) 
    return ;
    cout<<arr[index]<<" ";
    print(arr,index-1);  //isako upar likha do shida print hogaaa..
    

}
int main () 
{
    int arr[] = { 3,4,1,6,9};
    print (arr,4);

}