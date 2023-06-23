#include <iostream>
#include <algorithm>
using namespace std;
 
int n, c, w, tree[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> c >> w;
    for (int i = 0; i < n; ++i)
        cin >> tree[i];
 
    long long ans = 0, margin;
    int cost, cnt, t_margin;
    for (long long unit = 1; unit <= 10000; ++unit) {
        margin = 0;
        for (int i = 0; i < n; ++i) {
            cnt = tree[i] / unit;
            cost = (tree[i] - 0.5) / unit;
            t_margin = unit * cnt * w - c * cost;
            if (t_margin > 0)
                margin += t_margin;
        }
        ans = max(ans, margin);
    }
    cout << ans;
}