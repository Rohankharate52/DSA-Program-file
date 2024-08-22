#include<iostream>

using namespace std;

//  Subset Sum ..................................//

void print(int arr[],int index,int n,int sum) 
{  
    if(index==n) 
    {
        cout<<sum<<endl;
        return ;

    }
    //Not include
    print(arr,index+1,n,sum);
    //include
    print(arr,index+1,n,sum+arr[index]);

}
int main () 
{
    int arr[] = {1,2,3,4};
    print(arr,0,4,0);

}
    
