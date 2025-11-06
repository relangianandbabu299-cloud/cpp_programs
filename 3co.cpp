#include<iostream>
using namespace std;
class complex
{
	private:
		int real,imag;
		public:
			void get()
			{
				cout<<"enter real,imag";
				cin>>real>>imag;
			}
			complex add(complex c2)
			{
				complex temp;
				temp.real=real+c2.real;
				temp.imag=imag+c2.imag;
				return temp;
			}
			void show()
			{
				cout<<real<<"+"<<imag<<"i";
			}
};
int main()
{
	complex c1,c2,c3;
	cout<<"enter first complex number:";
	c1.get();
	c1.show();
	cout<<"enter second complex number:";
	c2.get();
	c2.show();
	c3=c1.add(c2);
	c3.show();
	return 0;
}
