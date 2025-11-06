#include <iostream>

using namespace std;

class Example

{

private:

int privateValue;

protected:

int protectedValue;

public:

Example()

{

privateValue = 10;

protectedValue = 20;

}

void display(int x = 5, int y = 10)

{

cout << "x = " << x << ", y = " << y << endl;

cout << "private Value: " << privateValue << endl;

cout << "Protected Value: " << protectedValue << endl;

}

};

int main()

{

Example obj;

cout << "Calling display without arguments:" << endl;

obj.display();

cout << "Calling display with one argument:" << endl;

obj.display(15);

cout << "Calling display with two arguments:" << endl;

obj.display(25, 35);

return 0;

}


