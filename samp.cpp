#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
		public:
			void get()
			{
				x=10;
			}
			void show()
			{
				cout<<"x="<<x;
			}
};
int main()
{
sample.s;
s.get();
s.show();
return 0;
}
