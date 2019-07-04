#include<iostream>
using namespace std;
class a
{
public:
	a(){}
	void f1()
	{ cout << "\t1";}
	virtual void f2()
	 { cout << "\t2";}
	virtual void f3()
	{ cout << "\t3";}
	void f4()
	{ cout << "\t4";}
};
class b: public a
{
	public: b(){}
	void f1()
	{cout << "\t5";}
	virtual void f5()=0;
};
class c: public b
{
	public: c(){}
	void f2()
	{cout << "\t6";}
	void f5()
	{cout << "tt";}
};
class d: public c
{
	public: d(){}
   virtual	void f4()
	{cout << "\t7";}

};
class e: public d
{
	public: e(){}
	void f1()
	{cout << "\t8";}

};
int main()
{
	a *o1;
	o1=new e;
	o1->f1();
	o1->f2();
	o1->f3();
	o1->f4();
	//o1->f5();

	c *o2;
	o2=new e;
	o2->f1();
	o2->f2();
	o2->f3();
	o2->f4();
	return 0;
}
