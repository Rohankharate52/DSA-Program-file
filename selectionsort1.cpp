

#include<iostream>
using namespace std;
int main () 
{
  //user se value lena hai

    int arr[1000] ;//= {10,4,1,3,2,7};

    int n;
    cout<<"enter the size of array";
    cin>> n;
    for(int i=0; i<n;i++)
    cin>>arr[i];
    cout<<"enter the elemetns in array";
    for (int i=0;i<n-1; i++) 

    {
        int index = i;
        for(int j= i+1; j<n; j++)   //iner 
        {
            if(arr [j] <arr[index])
            index=j;

        }
        swap (arr[i],arr[index]);

    }
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}