
#include<iostream>
using namespace std;

int countdigit (int n)
{
    int count =0;
    while (n)
    {
        count++;
        {
            count++;
            n/10;
        }
    }
}

bool Armststrong (int num, int digit) 
{
    int n= num,ans =0,rem;
    while(n) 
    {
        rem = n%10;
        n/10;
        ans = ans+pow(rem,digit);
    }
}
int main ()

{
    int num;
    cin>>n;

    //count digit

    int digit= countdigit(num);
    //armstrong 
    cout<<Armststrong (num ,digit);


}