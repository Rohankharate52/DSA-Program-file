


#include<iostream>
using namespace std;

int partition (int arr[],int start,int end) 
{
    int  pos = start;
    for(int i=start; i<=end; i++) 
    {                                                 //#2
        if(arr[i]<=arr[end]) 
        {
            swap(arr[i],arr[pos]) ;
            pos++;

        }
    }
    return pos-1;

}

void quicksort(int arr[], int start,int end) 
{
    if(start>=end) 
    return ;
                                                          //#1
    int pivot = partition(arr,start,end) ;
    //left sice
    quicksort(arr,start,pivot-1);
    //right side
    quicksort(arr,pivot,end) ;

}


int main () 
{
    int arr[] = {10,3,4,1,5,6,3,2,11,9};
    quicksort(arr,0,9);
    for(int i=0; i<10;i++) 
    cout<<arr[i]<<" "; 
}