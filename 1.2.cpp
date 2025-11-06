#include<iostream>
using namespace std;
class word
{
	public:
		void guess()
		{
			int i=0,attempts=1,flag=0;
			char ch;
			char str[20]="science";
			char str1[20];
			for(i=0;str[i]!='\0';i++)
			{
			//str1[i]=str[i];
			str1[i]='*';
			}
			cout<<str1;
			while(attempts<=4)
			{
				cout<<"enter your character";
				cin>>ch;
				for(int i=0;str[i]!='\0';i++)
				{
					if(ch==str[i])
			         {
			         str1[i]=ch;
			         cout<<str1<<"\n";
			         flag=1;
					 }
					
		}
		 if(flag==0)
			         {
			         cout<<"\nsorry! the character is not existing"<<endl;
			         attempts++;
			}
		//cout<<"you still have"<<attempts<<" chances"<<endl;
					 
			}
			
			if(attempts==4)
			cout<<"sorry";
			else
			cout<<str1;
			}
			};

int main()
{
	word w;
	w.guess();
	return 0;
}

