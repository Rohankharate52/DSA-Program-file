
#include<iostream>
using namespace std;

int main () 
{
    string s = "rohit";

    //Reverse string 

    int start = 0, end = s.size()-1;

    while(start<end)
    {
        swap (s[start],s[end]);
        start++,end--;

    }
    cout<<s;

    int size = 0;
    while(s[size]!='\0')
    {
        size++;

    }
    cout<<endl;
    cout<<size<<" ";


string s2 = "namas";

start =0, end = s2.size()-1;

  while(start<end) 
  {
    if(s2[start]!=s2[end])
    {
        cout<<"Not a palindrome";
        return 0; 
    }
    start++ ,end--;

  }
  cout<<"it is palindrome";
    
}