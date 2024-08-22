
/*

tale the age from user and then decide accordingly
1 if age < 18 ,
print-> not eligible for job
2 if age >= 18 and age <= 54,
print -> eligivle for job
3 if age >= 55 and age <= 57,
print -> eligible for job but retement soom
4 if age >57
print-> retirement time 


*/
#include<iostream>
using namespace std;

int main () 
{
    int age;
    cin>>age;

    if(age < 18 ){
        cout<<"not eligible for job";

    }
    else if(age <= 54){
        cout<<"eligible for job";

    }
    else if(age <= 57){
        cout<<"eligible for job but retriment soon ";

    }
    return 0;
    
}