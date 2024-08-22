

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
    
    //copy constructor
    Hero(Hero& temp ) {
        cout<<"copy construtor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print() {
        cout<<"health"<<this->health<<endl;
        cout<<"level "<<this->level<<endl;

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
    Hero S(70,'C');
    S.print();

    //copy construtor
    Hero R(S) ;
    R.print();

    return 0;
}
    