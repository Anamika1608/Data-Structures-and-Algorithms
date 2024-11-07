#include <bits/stdc++.h>
using namespace std;
class hero {
    private:
    int age = 18;

    public:
    int health = 9;
    char level;
    char* name;
    static int time;

    // simple constructor

    hero(){
        name = new char[100];
        cout << "constructor called" << endl;
    }

    // parameterized constructor

    hero(int h , char a){
        this->health = h;  // this stores address of ram object
        this->level = a;
        name = new char[100];
    }

    // copy constructor - creates deep copy - change in source obj does not change the value in copied object
    // default copy constructor - shallow copy 

    hero(hero& temp){ // pass by reference 
        name = new char[100];
        strcpy(this->name , temp.name);
        this->health = temp.health;
        this->level = temp.level;
    }
    
    int getAge(){  // getter
        return age;
    }

    void setAge(int a){  // setter
        age = a;
    }

    void print(){
        cout << this->health << endl;
        cout << this->level << endl;
        cout << this->name << endl;
    }

    void setName( char* n){
        strcpy(this->name,n);
    }

    static int random(){
        return time ;
    }

    ~hero(){
        cout << "destructor called" << endl;
    }
};

int hero::time = 6; // scope resolution operator


int main(){
    cout << hero::random() << endl;
    // // object
    hero ram(10,'a');
    char str[] = "babbar";
    ram.setName(str);
    ram.print() ;
    // cout << ram.health <<endl;
    // hero *ramPointer = new hero;
    // cout << ramPointer->health << endl;
    // // cout << *ramPointer->level << endl;

    // cout << ram.getAge() << endl;
    // ram.setAge(20);
    // cout << ram.getAge()<< endl;

//    copy constructor
    hero ritesh(ram);
    cout << "after copy const" << endl;
    ram.print() ;
    ritesh.print();
    cout << "after change" << endl;
    ram.name[0] = 'g';
    ram.print() ;
    ritesh.print();

    hero* neww = new hero();
    delete neww;


    // cout <<  hero::time << endl;
}
 