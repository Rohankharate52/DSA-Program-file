

// 3
#include<iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char level;

    Hero () {
        cout<<"constructor called "<<endl;
    }

    

    void print() {
        cout<<level <<endl;
    }


    //using geter or seter 

    int  getHealth() {
        return health;
    }
    char getlevel() {
        return level;
    }
    void setHealth(int h) {
        health = h;
    }
    
    void setlevel(char ch) {
        level = ch;
    }


};
int main () { 
     //object created statically
     Hero ramesh;
    //dynamically
    Hero *h = new Hero() ;

    return 0;
}
    