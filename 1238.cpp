#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>

#define MAX 1001
using namespace std;

int N, M, X, answer;
int dist[MAX], res[MAX];
vector<pair<int,int> > v[MAX];

void Dijkstra(int Start) {
    priority_queue<pair<int, int> > pq;
    dist[Start] = 0;
    pq.push(make_pair(0, Start));

    while (pq.empty() == 0) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i].first;
            int nCost = v[cur][i].second;

            if (dist[next] > cost + nCost) {
                dist[next] = cost + nCost;
                pq.push(make_pair(-dist[next], next));
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> X;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
    }


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dist[j] = INT_MAX;
        }
        Dijkstra(i);
        res[i] = dist[X];
    }
    for (int j = 1; j <= N; j++) {
        dist[j] = INT_MAX;
    }
    Dijkstra(X);
    for (int i = 1; i <= N; i++) {
        res[i] = res[i] + dist[i];
    }
    sort(res + 1, res + N + 1);
    answer = res[N];


    cout << answer << endl;

    return 0;
}