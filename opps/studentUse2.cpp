#include <iostream>
#include "student2.cpp"

int main(){
    student s1;
    student *s2 = new student;
    s1.setAge(28);
    s2 -> setAge(24);
    s1.display();
    s2->display();
}