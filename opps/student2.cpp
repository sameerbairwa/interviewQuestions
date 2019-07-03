class student
{
public:
    int rollNumber;

private:
    int age;

public:
    // default Constructor
    student()
    {
        cout << "Constructor called " << endl;
    }
    // parameterized constructor
    student(int r)
    {
        cout << "parameterized constructor called !" << endl;
        rollNumber = r;
    }

    student(int a, int r)
    {
        cout << "constructor 3 called" << endl;
        age = a;
        r = rollNumber;
    }
    student(int age, int rollNumber)
    {
        this->rollNumber = rollNumber;
        this->age = age;
    }

    void display()
    {
        cout << age << " " << rollNumber << endl;
    }
    int getAge()
    {
        return age;
    }
    int setAge(int a, int pass)
    {
        if (pass != 123)
        {
            return;
        }
        if (a < 0)
        {
            return;
        }
        a = age;
    }
};
