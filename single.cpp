#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		void get(){
		cout<<"enter x value=";
		cin>>x;
		}
};
class derived:public base
{
	public:
		int y;
		void getdata()
		{
		cout<<"enter y value=";
		cin>>y;
		}
		void display()
		{
			cout<<"addition is="<<x+y;
		}
};
int main()
{
	derived d;
	d.get();
	d.getdata();
 d.display();
}
