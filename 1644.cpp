#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool prime[n + 1];
    memset(prime, false, sizeof(prime));
    for (int i = 2; i <= n; i++) {
        for (int j = i * 2; j <= n; j += i) {
            prime[j] = true;
        }
    }
    vector<int> v;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == false) {
            v.push_back(i);
        }
    }

    int ans = 0;
    int left = 0;
    int right = 0;
    int sum = v.empty() ? 0 : v[0];
    while (left <= right && right < v.size()) {
        if (sum < n) {
            right++;
            sum += v[right];
        } else if (sum > n) {
            sum -= v[left];
            left++;
            if (left > right && left < v.size()) {
                right = left;
                sum = v[left];
            }
        } else {
            ans++;
            right++;
            sum += v[right];
        }
    }

    cout << ans << "\n";

}