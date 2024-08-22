#include<iostream>
//Min kadana ahe.....
using namespace std;
int main () 
{ 

    int arr[5] = {1,2,3,4,5};
    int ans = INT_MAX;

    for(int i=0; i<5; i++) 
    {
        if(arr[i]<ans)
        cin>>ans;
    }
    cout<<ans;
    return 0;
}