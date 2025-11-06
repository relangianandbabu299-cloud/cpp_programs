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
};
class derived1:public derived
{
	public:
		int z;
		void getdata1(){
			cout<<"enter z value=";
			cin>>z;
		}
		void display(){
			cout<<"addituon ="<<x+y+z;
		}
};
int main()
{
	derived1 obj;
	obj.get();
	obj.getdata();
	obj.getdata1();
 obj.display();
}
