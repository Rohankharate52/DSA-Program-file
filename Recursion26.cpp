
//lower case to  uppercase .....................................

//lta pn kar aata.......................

#include<iostream>
using namespace std;

void lowertoupper(string &str,int index)
{
    if(index==-1) 
    return ;

    str[index] = 'a'+str[index]-'A';
    lowertoupper(str,index-1) ;

}  
int main () 
{
    //lower case to uppercase

    string str = "ROHANKHARATE";
    
    lowertoupper (str,11);

    cout<<str<<endl;

}