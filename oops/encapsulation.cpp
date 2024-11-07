#include <bits/stdc++.h>
using namespace std;
class student{
    private :
        int age = 15 ;
        string name;

    public : 
        int getAge(){
            return this->age;
        }
};
int main(){
    student s1;
    cout << "fine" << endl;
    cout << s1.getAge();
}
