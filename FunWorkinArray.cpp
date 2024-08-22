
//funtion call lagake bhi array ko epaliments karata yete...

#include<iostream>
using namespace std;


void fun(int  a[],int n)
{
    cout<<sizeof(a)<<endl;  //8
    for(int i=0;i<n;i++)
    cout<<a[i]<< " ";
}
int main () 
{ 
    int arr[5] = {1,2,3,4,5};  //print  
    cout<<sizeof(arr)<<endl;   //20 
    fun(arr,5);



    return 0;
}