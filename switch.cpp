

/*
for 1 print monday
for 2 print tuesday and so on for 7 print sunday



*/
#include<iostream>
using namespace std;

int main ()
{
    int day;
    cin>>day;

    switch (day)
    {
    case 1:
    cout<<"monday";
    break;

    case 2: 
    cout<<"tuerday";
    break;

    case 3:
    cout<<"wedneday";
    break;
    
    case 4:
    cout<<"thruday";
    break;
    
    case 5:
    cout<<"friday";
    break;

    case 6: 
    cout<<"saturday";
    break;

    case 7:

    cout<<"sunday";


        
        break;

    
    default:
    cout<<"invalid data";
    
        break;
    }
}