#include<iostream>
using namespace std;

int main () 
{
    int arr[5] = {1,2,3,4,5};

    int *ptr = arr;
    //print the address of element

cout<<arr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;

    cout<<ptr<<endl;

}