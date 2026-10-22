#include <iostream>
using namespace std;

int smallestRepunitDivByK(int k) {
    int r = 0;
    for (int len = 1; len <= k; len++) {
        r = (r * 10 + 1) % k;
        if (r == 0) return len;
    }
    return -1;
}

int main() {
    int k;
    cin >> k;
    cout << smallestRepunitDivByK(k) << endl;
    return 0;
}