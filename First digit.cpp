#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int first = x / 1000;
    if (first % 2 == 0) {
        cout << "EVEN\n";
    } else {
        cout << "ODD\n";
    }
    return 0;
}
