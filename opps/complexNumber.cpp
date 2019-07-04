#include <iostream>
using namespace std;

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}
class ComplexNumbers
{
public:
    int real;
    int img;

    ComplexNumbers(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void plus(ComplexNumbers c2)
    {
        this->real = this->real + c2.real;
        this->img = this->img + c2.img;
    }

    void multiply(ComplexNumbers c2)
    {
        int x = this->real * c2.real - this->img * c2.img;
        this->img = this->real * c2.img + c2.real * this->img;
        this->real = x;
    }

    void print()
    {
        cout << this->real << " + i" << this->img;
    }
};