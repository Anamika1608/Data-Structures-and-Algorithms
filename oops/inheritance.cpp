// #include <bits/stdc++.h>
// using namespace std;

// class human {
//     public :
//     int height;
//     int weight;
//     int age;
//     void speak(){
//         cout << "speaking" << endl;
//     }
// };

// class dog {
//     public :
//     int breed;
//     void bark(){
//         cout << "barking" << endl;
//     }
// };

// class hybrid : public human , public dog {

// };

// class malee : protected human {
//     public :
//     int ex;
//     void getHeight(){
//         cout << this->height;
//     }
// };

// class male : public human { // the inherited prop in male class will be public 
//     public :
//     int ex;
//     void getHeight(){
//         cout << this->height << endl;
//     }
// };


// int main (){
//     male demo;
//     demo.getHeight() ;
//     hybrid check;
//     check.speak(); // multiple inheritance
// }



#include <bits/stdc++.h>
using namespace std;
class f1{
        public :
           int h;
           void function(){
            cout << "function1" << endl;
        }
};

class f2{
    public :
        int age;
        void function(){
            cout << "2" << endl;
        }
};

class f3 : public f1, public f2 {

};

int main (){
    f3 test;
    test.f2::function();
}