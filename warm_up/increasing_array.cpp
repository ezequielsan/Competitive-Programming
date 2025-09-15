#include <bits/stdc++.h>
using namespace std;
int main() {
    // solution comes here
    long long int n, count = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    
    for (int i = 1; i < n; i++) {
        if (x[i] < x[i-1]) {
            count += x[i-1] - x[i];
            x[i] = x[i-1];
        }
    }
    
    cout << count;
} 