#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while(T--){
        int N,K;
        cin >> N >> K;

        int time[1002];
        for(int i=1; i<=N; i++)
            cin >> time[i];
        
        vector<int> adj[1002];
        queue<int> q;
        int inDeg[1002] = {0,};
        int result[1002];
        for(int i=0; i<K; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            inDeg[y]++;
        }

        int W;
        cin >> W;

        for(int i=1; i<=N; i++){
            if(inDeg[i]==0)
                q.push(i);
            result[i]=time[i];
        }

        while(!q.empty()){
            int cur=q.front();
            q.pop();

            for(int i=0; i<adj[cur].size(); i++){
                int next=adj[cur][i];
                inDeg[next]--;
                result[next]=max(result[next], result[cur]+time[next]);

                if(inDeg[next]==0)
                    q.push(next);
            }
        }

        cout << result[W] << "\n";
    }
}