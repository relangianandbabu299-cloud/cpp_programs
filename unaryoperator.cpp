//Overload Unary, and Binary Operators using member function.  
#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public:
		void get(){
			x=10;
			y=-33;
			z=8;
		}
		void show(){
			cout<<"x="<<x<<endl;
				cout<<"y="<<y<<endl;
					cout<<"z="<<z<<endl;
		}
		void operator ++()
		{
			x=++x;
			y=++y;
			z=++z;
		}
};
int main(){
	unary u;
	u.get();
	++u;
	u.show();
}
