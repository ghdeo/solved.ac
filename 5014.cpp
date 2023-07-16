#include <iostream>
#include <queue>
using namespace std;

int f, s, g, u, d;
int visited[1000001];

void bfs() {
    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while (!q.empty()) {
        int floor = q.front();
        q.pop();

        if (floor == g) {
            cout << visited[floor] - 1 << "\n";
            return;
        }

        int next;
        next = floor + u;
        if (next <= f && visited[next] == 0) {
            q.push(next);
            visited[next] = visited[floor] + 1;
        }

        next = floor - d;
        if (next > 0 && visited[next] == 0 ) {
            q.push(next);
            visited[next] = visited[floor] + 1;
        }
    }

    cout << "use the stairs" << "\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> f >> s >> g >> u >> d;

    bfs();
}
