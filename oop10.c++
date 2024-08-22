

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

    //paramerteriesed constructor
    Hero (int health ) { 
        
        this -> health = health;
    }
    Hero (int health ,char level ) {
        this -> level = level;  //first level obje ki aur second upar ki 
        this -> health = health;
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
     Hero ramesh(10);
     //cout<<"Address of ramesh "<<&ramesh<<endl;
     ramesh.getHealth();
    //dynamically
    Hero *h = new Hero(11) ;

    Hero temp (22,'B');
    return 0;
}
    