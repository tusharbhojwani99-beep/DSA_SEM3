#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i <n-1; i++) {
            if (a[i + 1] >= a[i]) {
                a[i + 1] = a[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
 
        cout << sum << endl;
    }
 
    return 0;
}