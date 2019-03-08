#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n { 0 };
    vector<long long int> a(1);
    cin >> n;
    if (n <= 0 || n > 1000000) {
        return 0;
    }
    cin >> a[0];
    for (int i = 1; i < n; ++i) {
        long long int f;
        cin >> f;
        if (f != a.back()) {
            a.push_back(f);
        }
    }
    for (auto f : a) {
        cout << f << endl;
    }
    return 0;
}
