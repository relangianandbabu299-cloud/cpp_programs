#include <iostream>
using namespace std;
class Student 
{
private:
    string name;
    int age;
public:
    Student(string n, int a) 
	{
        name = n;
        age = a;
    }
    Student(const Student &s) 
	{
        name = s.name;
        age = s.age;
    }
    void display() 
	{
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() 
{
    Student s1("Pinisetty", 25);   
    Student s2 = s1;               
    cout << "Original Student: ";
    s1.display();
    cout << "Copied Student: ";
    s2.display();
    return 0;
}

