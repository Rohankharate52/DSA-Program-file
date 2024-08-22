#include<iostream>
using namespace std;

int main () 
{
    int arr[5] = {1,2,3,4,5};

   int *ptr = arr;
//     //print the address of element 0 index

// cout<<arr<<endl;
// cout<<arr+0<<endl;
// cout<<&arr[0]<<endl;

//     cout<<ptr<<endl;

// //print the addresss of second element or  1 index

// cout<<arr+1<<endl;
// cout<<&arr[1]<<endl;

// //print the value of 0 index

// cout<<arr[0]<<endl;
// cout<<*arr<<endl;    // 1
// cout<<*(arr+0)<<endl;
// cout<<*ptr<<endl;

// //saare address ko print kar do 

// for(int i=0; i<5; i++) 

// cout<<arr+i<<" ";

// //print all the value
// for(int i=0; i<5; i++)
// cout<<*(arr+i)<<endl;



//print all the element in array

for(int i=0; i<5;i++)
cout<<ptr[i]<<" ";

//print all address 

for (int i=0;i<5;i++) 
cout<<ptr+i <<endl;


//arithemetic operation ptr++ ; ptr =ptr+1;
//isse wale method se bhi sari value print kar pa rahu ...

for(int i=0; i<5; i++) 
{
    cout<<ptr<<" ";
    ptr++;

}

}