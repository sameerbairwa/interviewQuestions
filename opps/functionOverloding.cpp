#include<iostream>
using namespace std;

void print(int i)
{
    cout << "here is int "<<i<<endl;

}

void print( double h)
{
    cout << "here is float"<< h <<endl;

}
void print(char *c)
{
    cout << "here is char "<< c<<endl;
}
main()
{
    print(4);
    print(5.5);
    print("ten");
}
