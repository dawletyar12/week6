#include <iostream>
using namespace std;

int max2(int a, int b) {
    return a > b ? a : b;
}

int min2(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int mx = x, mn = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        mx = max2(mx, x);
        mn = min2(mn, x);
    }
    cout << "max=" << mx << " min=" << mn << endl;
    return 0;
}