

#include<iostream>
#include<vector>

using namespace std;

int  main () 
{
    //create vector declare 
    vector<int>v;
    vector<int>{5,1};

    //size and capacity
    cout<<"sizee of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(10); 

    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"capacity  v : "<<v.capacity()<<endl;
    //update vlaue

    v[1]= 5 ;
    cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1: "<<v1.capacity()<<endl;
    
}