


#include<iostream>
using namespace std;

void premut(int arr[],vector<vector<int> >)
int main () 
{
    int arr[] = {1,2,3};
    vector<vector<int> > ans;
    vector<int>temp;
    vector<bool> visited(3,0);
    permut(arr,ans,temp,visited);

    for(int j=0;j<ans[i].size(); j++)
    cout<<ans[i][j]<<" ";

}

