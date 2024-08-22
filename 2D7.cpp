


#include<iostream>

using namespace std;

void printcol (int arr[][4] ,int row,int col)
{
    //col wise print 
    for(int j=0; j<col; j++) 
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printsumdiag(int matix[][3],int row, int col)
{
    int frist =0;
    int sec = 0;

    //first diagonal sum

    int i=0;
    while(i<row)
    {
        frist+=matix[i][i];
        i++;
    }
    //second diagonal

    i=0;
     int j=col-1;
    while(j>=0)
    {
        sec+=matix[i][j];
        i++,j--;

    }
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


//printro


//print diagonal sum..
int matrix[3][3]= {1,2,3,4,5,6,7,8,9};
printsumdiag(matrix,3,3);
}