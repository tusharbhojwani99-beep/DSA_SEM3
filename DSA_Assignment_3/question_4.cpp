#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A == B) {
            cout << 0;
        }
        else if (gcd(A, C) == gcd(B, C)) {
            cout << 1;
        }
        else if (gcd(A, C + 1) == gcd(B, C + 1)) {
            cout << 2;
        }
        else {
            cout << 3;
        }

        cout << endl;
    }
}