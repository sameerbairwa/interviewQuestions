#include <iostream>
using namespace std;

class student
{
    int age;
    char *name;

public:
    student(int age, char *name)
    {
        this->age = age;
        // shallow copy
        //this->name = name;
        //deep copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void dispaly()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[] = "abcd";
    student s1(20, name);
    s1.dispaly();

    name[3] = 'e';
    student s2(21, name);
    s2.dispaly();

    s1.dispaly();

    return 0;
}