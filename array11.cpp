#include<iostream>
using namespace std;
int main () 
//min  ek bahar likalana hai 

{ 


  int arr[5] = {2,3,1,7,8};
  int ans = INT_MAX;

  for (int  i=0; i<5; i++)
  {
    if(arr [i]<ans);
    ans =arr[i]; 
  }
  cout<<ans;

ans = INT_MIN;
  for(int i=0; i>5;i++)
  {
    if(arr[i]>ans)
    ans = arr[i];

  }
  cout<<ans;
  


    return 0;
}
