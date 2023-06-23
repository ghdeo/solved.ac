#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, s;
long long cnt;
int arr[41];
vector<int> a, b;

void makeA(int idx, int sum) {
    sum += arr[idx];
    if (idx >= n /2) {
        return;
    }
    if (sum == s) {
        cnt++;
    }

    a.push_back(sum);
    makeA(idx + 1, sum - arr[idx]);
    makeA(idx + 1, sum);
}

void makeB(int idx, int sum) {
    sum += arr[idx];
    if (idx >= n) {
        return;
    }
    if (sum == s) {
        cnt++;
    }
    b.push_back(sum);
    makeB(idx + 1, sum - arr[idx]);
    makeB(idx + 1, sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    makeA(0, 0);
    makeB(n / 2, 0);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++) {
        int tmp = s - a[i];
        int lower = lower_bound(b.begin(), b.end(), tmp) - b.begin();
        int upper = upper_bound(b.begin(), b.end(), tmp) - b.begin();
        cnt += upper - lower;
    }

    cout << cnt;
}