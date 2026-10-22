#include <iostream>
using namespace std;

long long sumrange(int a, int b) {
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    long long sum = 0;
    for (long long i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sumrange(a, b) << endl;
    return 0;
}