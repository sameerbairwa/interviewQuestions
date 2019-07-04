#include<iostream>
using namespace std;
class average
{
private:
    int a;
    int b;
public:
    void setvalue()
    {
        a=15;
        b=30;
    }
  friend   float avg( average s );

};
 float avg( average s )
    {
        return float( s.a + s.b )/2.0;
    }
main()
{
    average x;
    x.setvalue();
    cout << " average value is "<< avg( x) ;
}
