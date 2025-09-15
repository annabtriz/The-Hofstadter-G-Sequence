#include <iostream>
#include <vector>

#include "src/lab3.hpp"

using namespace std;

int main() {
    int limit = 10;
    vector<int> memo(limit + 1, -1);

    for (int n = 0; n <= limit; n++) {
        int value = hofstadter_memorized(n, memo);
        cout << "gSequence(" << n << ") == " << value << endl;
    }

    return 0;
}
