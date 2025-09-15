#include <bits/stdc++.h>
using namespace std;

void weird(long long int n) {
	cout << n << " ";
	if (n == 1) return;
	else if (n % 2 == 0) weird(n/2);
	else weird(n*3 + 1);
}

int main() {
    // solution comes here
    long long int n;
    cin >> n;
    weird(n);
} 