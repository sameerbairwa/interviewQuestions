 #include <iostream>
 using namespace std;

class person
{
    char name[20];
    int age;
public:
    void getdata(void);
    void display(void);
};

void person :: getdata(void)
{
    cout << "Enter your name: \n";
    cin  >> name;
    cout <<  "Enter your age:\n";
    cin  >> age;
}

void person :: display(void)
{
    cout << "name:" << name;
    cout << "\nage:"  << age;
}


 main()
{

    person p;
    p.getdata();
    p.display();

}


