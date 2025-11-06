#include <iostream>
using namespace std;
class Demo 
{
public:
    // Constructor
    Demo() 
{
        cout << "Constructor called: Object created." << endl;
    }
    // Destructor
    ~Demo() 
{
        cout << "Destructor called: Object destroyed." << endl;
    }
};
int main() 
{
    cout << "Inside main function." << endl;
    Demo obj; 
    cout << "Exiting main function." << endl;
    return 0;  
}




