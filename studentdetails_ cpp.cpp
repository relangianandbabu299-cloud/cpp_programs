#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int rollnumber;
		char gender;
		public:
			void get()
			{
				cout<<"enter the details";
				cin>>name;
				cin>>rollnumber;
				cin>>gender;
			}
			void show()
			{
				cout<<"the name is:"<<name<<endl;
				cout<<"the rollnumber is:"<<rollnumber<<endl;
				cout<<"the gender is:"<<gender;
			}
};
int main()
{
	student s;
	s.get();
	s.show();
	return 0;
}
