
// count the vowel/////////////////////////////////////////////////
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#include<iostream>
using namespace std;

int count (string str,int index) 
{
    if(index==-1)   //base conditon,,,,
    return 0;

    //vowel hga
    if(str[index]=='a' || str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u') 

    return 1+count(str,index-1) ;
    //nahi hga
    else
    return count (str,index-1) ;

}


int main ()
{
    //count vowel
    string str = "rohit";
    cout<<count(str,4)<<endl;

}


    
