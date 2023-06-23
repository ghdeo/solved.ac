#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int arr[10001];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    int sum = arr[0];
    int left = 0;
    int right = 0;
    while (left <= right && right < n) {
        if (sum < m) {
            right++;
            sum += arr[right];
        } else if (sum > m) {
            sum -= arr[left];
            left++;
            if (left > right && left < n) {
                right = left;
                sum = arr[left];
            }
        } else if (sum == m){
            ans++;
            right++;
            sum += arr[right];
        }
    }

    cout << ans << "\n";
}