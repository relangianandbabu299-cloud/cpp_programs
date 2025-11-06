#include<iostream>
using namespace std;
class increment
{
	int x,y,z;
	public:
		void get()
		{
			x=10;
			y=30;
			z=40;
		}
		void show()
		{
			cout<<"x="<<x<<endl;			
			cout<<"y="<<y<<endl;
   cout<<"z="<<z;
		}
		void operator++()
		{
			x=++x;
			y=++y;
			z=++z;
		}
};
int main()
{
	increment i;
	i.get();
	++i;
	i.show();
}
