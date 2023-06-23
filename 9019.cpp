#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int T;
int A,B;
bool visit[10000];

void bfs(){
    queue<pair<int, string>> q;
    q.push(make_pair(A,""));
    visit[A]=true;

    while(!q.empty()){
        int num=q.front().first;
        string s=q.front().second;
        q.pop();

        if(num==B){
            cout << s << "\n";
            return;
        }
        int D,S,L,R;

        D = (num*2)%10000;
        if(!visit[D]){
            visit[D]=true;
            q.push(make_pair(D,s+"D"));
        }
        
        S = num-1 < 0 ? 9999 : num-1;
        if(!visit[S]){
            visit[S]=true;
            q.push(make_pair(S,s+"S"));
        }

        L = (num%1000)*10 + num/1000;
        if(!visit[L]){
            visit[L]=true;
            q.push(make_pair(L,s+"L"));
        }

        R = num/10 + (num%10)*1000;
        if(!visit[R]){
            visit[R]=true;
            q.push(make_pair(R,s+"R"));
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    cin >> T;
    while(T--){
        cin >> A >> B;
        memset(visit,false,sizeof(visit));
        bfs();
    }
}