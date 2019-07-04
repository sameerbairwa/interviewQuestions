#include <iostream>
#include "student2.cpp"
int main(){

    student s1;
    s1.display();

    student s2;

    student *s3 = new student;
    s3 -> display();

    cout << "parameterized constructor demo" << endl;
    student s4(10);
    s4.display();


    student s5(20,100);
    s5.display();
}