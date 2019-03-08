#include <iostream>
#include <string>

using namespace std;

int main() {
    string J, S;
    cin >> J >> S;
    if (J.empty() || S.empty()) {
        cout << 0;
        return 0;
    }
    size_t index { 0 }, found { 0 };
    while (true) {
        index = S.find_first_of(J, index);
        if (index != string::npos) {
            ++index;
            ++found;
        } else {
            break;
        }
    }
    cout << found;
    return 0;
}
