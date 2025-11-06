#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()
		{
			cout<<"print() of base class"<<endl;
		}
};
class derived:public base
{
	public:
		void print()
		{
			cout<<"print() of derived class"<<endl;
		}
};
int main()
{
	base b,*bptr;
	derived d;
	bptr=&b;
	bptr->print();
	bptr=&d;
	bptr->print();
}
