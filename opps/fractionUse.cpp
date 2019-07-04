#include <iostream>
#include "fractionClass.cpp"
int main(){
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
}