#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }

        cout << 4 << endl; 
        for (int i = 0; i < 2; i++) {
            cout << (1 + n % 2) << " " << n << endl;
        }

        
        for (int i = 0; i < 2; i++) {
            cout << 1 << " " << 2 << endl;
        }
    }

    return 0;
}
