
//lower case to  uppercase .....................................

//lta pn kar aata.......................

#include<iostream>
using namespace std;

void lowertoupper(string &str,int index)
{
    if(index==-1) 
    return ;

    str[index] = 'A'+str[index]-'a';
    lowertoupper(str,index-1) ;

}  
int main () 
{
    //lower case to uppercase

    string str = "rohankharate";
    
    lowertoupper (str,11);

    cout<<str<<endl;

}