#include<iostream>
using namespace std;

class space
{
private:

    int x;
    int y;
    int z;
public:
    void getdata( int a, int b, int c );
    void display( void );
    void operator - ();

};
void space :: getdata( int a, int b, int c )
{
    x = a;
    y = b;
    z = c;

}
void space :: display( void )
{
    cout << "x = " << x <<endl;
    cout << "y = " << y <<endl;
    cout << "z = " << z <<endl;
 }
 void space :: operator -()
 {

     x = -x;
     y = -y;
     z = -z;
 }
 main()
 {
     space s;
     int p,q ,r;
     cout << " Enter x y z :"<<endl;
     cin >> p >> q >> r ;
     s.getdata(p, q, r );
     cout << "s: ";
     s.display();

     -s;
     cout << "-s:";
     s.display();
 }


