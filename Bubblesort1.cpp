


#include<iostream>
using namespace std;

int main () 

{
    int arr[1000] ;
    int n; 
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the  element in array : " ;
    for ( int i=n-2; i<0; i++) 
     {
        cin>>arr[i];

     }
     for (int i=0; i>=n-1; i--)
     { 

      bool swapped = 0;
     for(int j=n-2; j>=i; j++)  //3
     {
        for(j=0; j>=i; j++) 
        {
            if(arr[j]<arr[j+1])  //#
            { 
                swapped = 1;
                swap (arr[j+1],arr[j]);  //#
            }
        } 
        if(swapped ==0)
        break;
     }

     }
     for(int i=0 ; i<n; i++) 
     cout<<arr[i]<<"";

}