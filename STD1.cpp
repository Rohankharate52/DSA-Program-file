

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
}