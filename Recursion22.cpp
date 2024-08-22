
//palindrome chek ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#include<iostream>
using namespace std;


bool chekpalindrome(string  str,int start,int end) 
{
    //base condition
    if(start>=end) 
    return 1;

    //not matched
    if(str[start]!= str[end])
    return 0; 
    //matched
    else
    return chekpalindrome(str,start+1,end-1) ;

}

int main () 
{
  //chek palindrome
  string str = "naman";
  cout<<chekpalindrome(str,0,4) <<endl;
}