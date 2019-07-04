#include<iostream>
using namespace std;
class B;

class A
{
private:
    int a;
public:
    A()
    {
        a=10;

    }
    friend int add( A,B );
};

class B
{
private:
    int b;
public:
    B()
    {
        b=20;
    }
    friend int add( A, B);

};

int add(A obj1,B obj2 )
{
    int sum;
    sum=obj1.a+obj2.b;
    return sum;

}

main()
{
    A x;
    B y;
    cout << "sum is "<<add(x,y);
}
