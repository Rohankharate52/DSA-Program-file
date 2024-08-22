
#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main () 
//user se input lena hai ... 

{
//creation 2d vector
int n,m;
cout<<"enter rows and col: ";
cin>>n>>m;
vector<vector<int>>matrix(n,vector<int> (m,1));


//for(int i=0; i<3; i++) 
//for (int j = 0; j<4; j++) 
//cout<<matrix[i][j]<<" ";

//cout<<"Rows = "<<matrix.size();
//cout<<endl; 
//cout<<"Cols = "<<matrix.size();
for(int i=0; i<n; i++) 
for(int j=0; j<m; j++) 
cin>>matrix[i][j];


for(int i=0; i<n; i++) 
{
    for(int j=0;j<m; j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
}


}