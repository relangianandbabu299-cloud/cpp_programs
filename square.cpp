#include <iostream>
using namespace std;
inline int square(int x) {
    return x * x;
}
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int main() {
    int num = 10;
    cout << "Square of " << num << " is: " << square(num) << endl;
    int a = 10, b = 20;
    float x = 3.5, y = 2.5;
    cout << "Addition of integers: " << add(a, b) << endl;
    cout << "Addition of floats: " << add(x, y) << endl;
    return 0;
}

