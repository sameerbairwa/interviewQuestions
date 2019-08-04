#include <iostream>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << " / " << this->denominator << endl;
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }

    fraction add(fraction f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);
        //numerator = num;
        //denominator = lcm;
        fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
   const fraction operator+(fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);
        //numerator = num;
        //denominator = lcm;
        fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    const fraction operator*(fraction const &f2)
    {
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    const bool operator==(fraction const &f2)
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
};


int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);
    f1.add(f2);
    f1.print();
    f2.print();
    
    fraction f3 = f1.add(f2);
    f3.print();

    fraction f4 = f1 + f2;
    f4.print();
    
}