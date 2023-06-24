#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int, int> > node[10001];
bool visited[10001];
int result;
int endPoint;

void dfs(int p, int len) {
    if (visited[p]) {
        return;
    }

    visited[p] = true;
    if (result < len) {
        result = len;
        endPoint = p;
    }

    for (int i = 0; i < node[p].size(); i++) {
        dfs(node[p][i].first, len + node[p][i].second);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        node[a].push_back(pair<int, int>(b, c));
        node[b].push_back(pair<int, int>(a, c));
    }

    dfs(1, 0);

    result = 0;
    memset(visited, false, sizeof(visited));

    dfs(endPoint, 0);
    cout << result << "\n";
}