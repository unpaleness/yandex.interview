#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0 || n > 10000) {
        cout << 0;
        return 0;
    }
    int ones { 0 }, max_ones { 0 };
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == 49) {
            ++ones;
        } else {
            if (ones > max_ones) {
                max_ones = ones;
            }
            ones = 0;
        }
    }
    cout << (ones > max_ones ? ones : max_ones);
    return 0;
}
