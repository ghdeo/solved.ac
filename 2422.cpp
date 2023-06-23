#include <iostream>
using namespace std;

bool isTerribletaste[201][201];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int p,q;
        cin >> p >> q;
        isTerribletaste[p][q]=isTerribletaste[q][p]=true;
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(isTerribletaste[i][j])
                continue;
            for(int k=j+1; k<=n; k++){
                if(isTerribletaste[i][k]||isTerribletaste[j][k])
                    continue;
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}