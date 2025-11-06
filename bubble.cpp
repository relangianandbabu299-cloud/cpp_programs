#include<iostream>
using namespace std;
template<typename T>
void print(T a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[5]={12,97,34,56,3};
	char c[5]={'s','e','a','m','h'};
	float f[5]={2.5,14.7,98.2,23.2,85.3};
	sort(a, a+5);
	print(a, 5);
	sort(c, c+5);
	print(c, 5);
	sort(f, f+5);
	print(f, 5);
}
