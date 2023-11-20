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
    cout << cases << endl;
    return 0;
}