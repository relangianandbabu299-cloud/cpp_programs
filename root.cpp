#include<iostream>
using namespace std;
int main()
{
 double a,b,c;
	cout<<"enter a,b and c values:";
	cin>>a>>b>>c;
	d=(b*b-4*a*c);
	if(d==0)
	{
		root1=root2=-b/(2*a);
	}
	else if(d>0)
	{
	 root1(-b+sqrt(b*b-4*a*c))/(2*a);
	 root2(-b+sqrt(b*b-4*a*c))/(2*a);
	}
	else
	cout"roots are imaginery"
		cout<<"the first root is"<<root1<<""<<"the second root is"<<root2;
	return 0;
}
