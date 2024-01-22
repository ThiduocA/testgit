#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(int k) {
    vector<int> a(k + 1, 0);
    a[0] = 1;

    for (int i = 1; i < k; i++) {
        for (int j = k; j >= i; j--) {
            if (a[j - i] != 0) {
				if (j == i) {
					if (a[j] == 0)
						a[j] += a[j-i];
					else
						a[j] += 1;
				} else {
					a[j] += a[j-i];	
				}
			}
        }
    }
    return a[k];
}

int main() {
    int k;
    cout << "Nhap k = ";
    cin >> k;
    cout << "Co tat ca " << solve(k) << " cach phan tich.";
    return 0;
}
