#include <iostream>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;

int main () {
    int cases;
    cin >> cases;
    assert(1 <= cases);
    assert(cases <= 100);
    for (int i = 0; i < cases; i++) {
        int value;
        cin >> value;
        cout << "Case #" << i << ": " <<  << endl;
    }
    return 0;
}