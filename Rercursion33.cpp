#include<iostream>

using namespace std;


#include<vector>

//  Subset Sum ..................................//

void print(int arr[],int index,int n,int sum,vector<int>&ans) 
{  
    if(index==n) 
    {
       ans.push_back(sum) ;
        return ;

    }
    //Not include
    print(arr,index+1,n,sum,ans);
    //include
    print(arr,index+1,n,sum+arr[index],ans);

}
int main () 
{
    int arr[] = {1,2,3,4};
    vector<int> ans;
    print(arr,0,4,0,ans);
    for(int i=0; i<ans.size();i++)
    cout<<ans[i]<<endl;


}Re


//fakt  kali print cha aanale ahe....

    
