
#include<bits/stdtr1c++.h>
using namespace std;
int main () 
{
    string s = "strive";
    int len = s.size();
    s(len-1) = 'z';
    cout<<(len -1);
    return 0;
}