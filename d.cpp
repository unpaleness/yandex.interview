#include <iostream>

using namespace std;

void iterate(int n, int i, int depth, char* seq) {
    if (i >= 2 * n) {
        cout << seq << endl;
        return;
    }
    if (depth <= n && depth < 2 * n - i) {
        seq[i] = '(';
        iterate(n, i + 1, depth + 1, seq);
    }
    if (depth > 0) {
        seq[i] = ')';
        iterate(n, i + 1, depth - 1, seq);
    }
}

int main() {
    int n;
    cin >> n;
    if (n < 0 || n > 11) {
        return 0;
    }
    if (n == 0) {
        cout << endl;
        return 0;
    }
    char* seq = new char [2 * n + 1];
    seq[2 * n] = '\0';
    iterate(n, 0, 0, seq);
    delete [] seq;
    return 0;
}
