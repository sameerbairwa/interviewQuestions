#include<iostream>
using namespace std;

class student {
    int age;
    public:
    char *name;

    student(int age, char* name){
        this->age = age;
        //shallow copy
        // this->name = name;

        // deep copy to avoid shallow copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void display(){
        cout << name  << " " << age << endl;
    }

    // copy Constructor
    student(student const &s){
         this->age = age;
         //this->name = name;  shallow copy
         this->name = new char[strlen(s.name) + 1];
         strcpy(this->name, s.name);
    }   

};

int main(){
    char name[] ="abcd";
    student s1(20, name);
    s1.display();

    student s2(s1);

    s2.name[0] = 'x';
    s1.display();
    s2.display(); 

    return 0;
}