#include<iostream>
#include<string.h>
using namespace std;

class rectangle
{
private:
    int height;
    int width;
    int colour;

public:
    rectangle();
    rectangle( int  );
    rectangle( int , int  );
    rectangle( int , int , int  );



};

rectangle :: rectangle()
{
    height=0;
    width=0;
    colour=0;
}

 rectangle :: rectangle( int  a )
{
    height=a;
    width=a;
    colour=0;
    cout << "height "<<height<<endl;
    cout <<"width" << width<<endl;

}

rectangle :: rectangle( int a, int b )
{
    height=a;
    width=b;
    colour=0;
    cout << "height "<<height<<endl;
    cout <<"width" << width<<endl;

}

rectangle :: rectangle(int a, int b, int c )
{
    height=a;
    width=b;
    colour=c;
    cout << "height "<<height<<endl;
    cout <<"width" << width<<endl;
    cout << "colour"<< colour<<endl;

}



main()
{
    rectangle* r1 = new rectangle(); // rectangle r1();
    rectangle r2(4);  // rectangle r2 = new rectangle(4);
    rectangle r3(4,5); // rectangle r3 = new rectangle(4,5);
    rectangle r4(4,5,6); // rectangle r4 = new rectangle(4,5,6);

}
