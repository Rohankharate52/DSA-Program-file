


#include<iostream>

using namespace std;

void printcol (int arr[][4] ,int row,int col)
{
    //col wise print 
    for(int j=0; j<col; j++) 
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printrowmax(int arr[][4],int row,int col)
{
    int index = -1,sum= INT_MIN;

    for(int i=0;i<row;i++)
    {
        int totol=0;
        for(int j=0;j<col;j++) 
        totol+=arr[i][j];

        if(totol>sum)
        {
            sum=totol;
            index=i;

        }
    }
    cout<<index<<" ";
}
int main () 

{    

    //create 2 d array
    int arr1[3][4 ] = { 1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = { 0,1,2,3,4,5,6,7,8,9,910,11};
    int ans [3][4];
   //print all the value in array row wise
  // for ( int row=0; row<3; row++) 
  // for( int col= 0; col<4; col++) 
   //cout<<arr[row][col]<<" ";


//print all the value in arry col wise funtin call


//printcol(arr,3,4);


//find ans element in our array 
// element find karan hai to .... 

int x= 7; 

    //add 2 matrix 

//priny with max sum 

//print row index maximum sum..


printrowmax(arr1,3,4);

}