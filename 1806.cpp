#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    int arr[100001];
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minLength = n + 1;
    int sum = arr[0];
    int left = 0;
    int right = 0;

    while (left <= right && right < n) {
        if (sum < s) {
            right++;
            sum += arr[right];
        } else if (sum > s) {
            minLength = min(minLength, right - left + 1);
            sum -= arr[left];
            left++;
        } else if (sum == s) {
            minLength = min(minLength, right - left + 1);
            right++;
            sum += arr[right];
        }
    }

    if (minLength > n) {
        minLength = 0;
    }
    cout << minLength << "\n";
}