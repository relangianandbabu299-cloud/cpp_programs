#include<iostream>
using namespace std;
class sample
{
	public:
		static int count;
		sample()
			{
				count++;
			}
};
int sample::count;
int main()
{
	sample s1,s2,s3;
	cout<<sample::count;
}
