#include <iostream>

using namespace std;

int main() {
    int k { 0 }, vars { 101 };
    cin >> k;
    if (k <= 0 || k > 1024) {
        return 0;
    }
    int* figs = new int [vars];
    for (int i = 0; i < vars; ++i) {
        figs[i] = 0;
    }
    int length { 0 }, temp { 0 };
    for (int j = 0; j < k; ++j) {
        cin >> length;
        for (int i = 0; i < length; ++i) {
            cin >> temp;
            ++figs[temp];
        }
    }
    for (int i = 0; i < vars; ++i) {
        if (figs[i] > 0) {
            for (int j = 0; j < figs[i]; ++j) {
                cout << i << ' ';
            }
        }
    }
    return 0;
}
