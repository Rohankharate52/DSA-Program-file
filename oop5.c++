

// 3
#include<iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char level;

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
    //creation of object 
   // Hero ramesh ;
    //how to access
    //ramesh.health = 70;
   //cout<<"ramesh health is " <<ramesh.getHealth() <<endl;
    //ramesh.setHealth(75) ;
    //ramesh.level = 'A';


    //cout<<"health is: "<<ramesh.getHealth() <<endl;
    //cout<<"level is: "<<ramesh.level<<endl;



    //static allocation
    Hero a;
    a.setHealth(80);
    a.setlevel('B');
    cout<<"level is " <<a.level<<endl;
    cout<<"health is "<<a.getHealth() <<endl;

    //dynamically 
    Hero *b = new Hero;
    b->setlevel('A');
    b->setHealth(70);

    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

    cout<<"level is " <<b->level<<endl;
    cout<<"health is "<<b->getHealth() <<endl;
    
    cout<<"level is " <<b->level<<endl;
    return 0;
}
    