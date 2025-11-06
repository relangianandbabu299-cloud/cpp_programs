#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;  // Corrected capitalization
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b1(45);
    showLength(b1);
    return 0;
}
