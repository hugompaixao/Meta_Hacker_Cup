#include <iostream>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;

void verify (int min, int x, int max) {
    assert(min <= x);
    assert(x <= max);
}

int main () {
    int cases;
    cin >> cases;
    verify(1, cases, 100);
    for (int i = 0; i < cases; i++) {
        int word_num;
        cin >> word_num;
        verify(1, word_num, 9);
        for (int j = 0; j < word_num; j++) {
            
        }
    }
    return 0;
}