#include <iostream>
using namespace std;

int mat1[100][100];
int mat2[100][100];
int ans[100][100];
int main(){
    int N,M,K;
    cin >> N >> M;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> mat1[i][j];
    
    cin >> M >> K;
    for(int i=0; i<M; i++)
        for(int j=0; j<K; j++)
            cin >> mat2[i][j];
    
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            for(int k=0; k<M; k++)
                ans[i][j]+=mat1[i][k]*mat2[k][j];
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}