#include <iostream>
using namespace std;
#include "student2.cpp" // include student class

int main(){
    //create object statically 
    student s1;
    student s2;
    s1.rollNumber  = 101;
    //s1.age = 24;
    cout << "S1 age: "  << s1.getAge() << endl;
    cout << "S1 roll Number : "  <<  s1.rollNumber << endl;
    s1.dispaly();
    s2.display();


    student s3,s4,s5;

    // create objects dynamically
    student *s6 = new student;
    (*s6).rollNumber = 102;
    //(*s6).age = 23;
    // second method
    // s6->age = 23;
    //s6->rollNumber = 102;
   // cout << (*s6.age) << " " << (*s6.rollNumber);
   cout << "s6 age: " << s6 -> getAge() << endl;

}