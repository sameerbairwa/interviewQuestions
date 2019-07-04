#include<iostream>
using namespace std;
class a
{
    public:
	a(){};
	virtual void f1()
	{ cout << "\t 1";}
	void f2()
	{ cout << "\t 2";}
	virtual void f3()
	{ cout << "\t 3";}
	virtual void f4()
	{ cout << "\t 4";}
};
class b: public a
{
 public:
	b(){};
	void f1()
	{ cout << "\t 5";}
	virtual void f5()=0;


};
class c: public b
{
     public:
	c(){};
	virtual void f2()
	{ cout << "\t 6";}
	void f5()
	{ cout<< "tt";};
};
class d: public c
{
 public:
	d(){};
	virtual void f4()
	{ cout << "\t 7";}

};
class e: public d
{
 public:
	e(){};
	void f1()
	{ cout << "\t 8";}
};
int main()
{

	a *o1;
	o1 = new d;
	o1->f1();
	o1->f2();
	o1->f3();
	o1->f4();

	c *o2;
	o2=new e;
	o2->f1();
	o2->f2();
	o2->f3();
	o2->f4();
	return 0;

}
