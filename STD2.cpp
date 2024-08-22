

#include<iostream>
#include <vector>


using namespace std;

int main () 
{
//create vector
vector<int> v;
vector<int>v1(5,1);

//size and capacity

cout<<"size of v: "<<v.size()<<endl;
cout<<"capacity of v:"<<v.capacity()<<endl;
v.push_back (2);
v.push_back(3); 
v.push_back(10);
cout<<"size of v: "<<v.size()<<endl;
cout<<"capacity of v:"<<v.capacity()<<endl;

v[1]= 5;

cout<<"size of v: "<<v.size()<<endl;
cout<<"capacity of v:"<<v.capacity()<<endl;
v.push_back(8);

//delete value from vector


vector<int> vnew;
vnew.push_back(4);
vnew.push_back(41);
vnew.push_back(14);
vnew.push_back(41);
vnew.push_back(84);
vnew.pop_back();

cout<<"size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew:"<<vnew.capacity()<<endl;


vnew.erase(vnew.begin()+1);

cout<<"size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew:"<<vnew.capacity()<<endl;

for(int i=0; i<vnew.size();i++) 
cout<<vnew[i]<< " ";

vnew.insert(vnew.begin()+1,50);

cout<<"size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew:"<<vnew.capacity()<<endl;

for(int i=0; i<vnew.size();i++) 
cout<<vnew[i]<< " ";

vnew[1]=37;


for(int i=0; i<vnew.size();i++) 
cout<<vnew[i]<< " ";
cout<<endl;
cout<<"size of vnew: "<<vnew.size()<<endl;
cout<<"capacity of vnew:"<<vnew.capacity()<<endl;

vector<int> arr;
arr.push_back(2);
arr.push_back(2);
arr.push_back(2);
arr.push_back(2);
cout<<arr[0]<<endl;
cout<<arr.front()<<endl;
cout<<arr.[arr.size()-1]<<endl;
cout<<arr.back()<<endl;



vector<int>a;
//copy value of 1 vector another 


a = arr;
cout<<a.size();
cout<<endl;
for(auto it = arr.begin();it!=arr.end() ; it++)
{
    cout<<it<<" ";

}

for (auto it = arr.begin(); it!=arr.end();it++)
{
    cout<<it<<" ";

}
cout<<endl;
for(auto i: arr)
cout<<i <<endl;

}