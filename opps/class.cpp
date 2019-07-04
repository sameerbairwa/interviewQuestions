#include<iostream>
using namespace std;


class item
{
private :
    int number;
    float cost;
public :
    void getdata( void  );
    void displaydata( void );

} ;

void item :: getdata( void  )
{

    cout<< "Enter number \n";
    cin>>number ;
    cout<<"Enter cost\n";
    cin>>cost;

}

void item :: displaydata( void )
{
    cout<< "the number is:"<<number<<"\n";
    cout<<"the cost is :"<< cost<<"\n";
}

 main()
 {
    item c1;
    c1.getdata();
    c1.displaydata();

 }
