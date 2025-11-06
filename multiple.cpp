#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		void getdata(){
			cout<<"enter x value"
			cin>>x;
		}
};
class  base2 
{
	public:
		int y;
		void get(){
			cout<<"enter y value "
			cin>>y;
		}
};
class derived:public  base,base2
