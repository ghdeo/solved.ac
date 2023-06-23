// #include <iostream>
// #include <queue>
// #include <cstring>
// using namespace std;

// int N;
// int arr[101][101];
// int visit[101];
// void go(){
//     for(int k=1; k<=N; k++)
//         for(int i=1; i<=N; i++)
//             for(int j=1; j<=N; j++)
//                 if(arr[i][k]&&arr[k][j])
//                     arr[i][j]=1;
// }
// int main(){ //floyd
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> N;
//     for(int i=1; i<=N; i++)
//         for(int j=1; j<=N; j++)
//             cin >> arr[i][j];
    
//     go();

//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=N; j++)
//             cout << arr[i][j] << " ";
//         cout << "\n";
//     }


#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N;
vector<int> v[100];
int visit[100];

void dfs(int x){
    for(int i=0; i<v[x].size(); i++){
        if(!visit[v[x][i]]){
            visit[v[x][i]]=1;
            dfs(v[x][i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    
    int a;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a;
            if(a==1)
                v[i].push_back(j);
        }
    }

    for(int i=0; i<N; i++){
        memset(visit,0,sizeof(visit));
        dfs(i);
        for(int j=0; j<N; j++)
            cout << visit[j] << " ";
        cout << "\n";
    }
}