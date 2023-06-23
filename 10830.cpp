#include <iostream>
#include <cstring>
using namespace std;

long long N,B;
long long mat[5][5];
long long tmp[5][5];
long long ans[5][5];

void mul_Mat(long long x[5][5], long long y[5][5]){
    memset(tmp,0,sizeof(tmp));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                tmp[i][j]+=x[i][k]*y[k][j];
            }
            tmp[i][j]%=1000;
        }
    }
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            x[i][j]=tmp[i][j];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> B;
    for(int i=0; i<N; i++){ 
        for(int j=0; j<N; j++){
            cin >> mat[i][j];
        }
        ans[i][i]=1;
    }

    while(B>0){
        if(B%2==1)
            mul_Mat(ans,mat);
        mul_Mat(mat,mat);
        B/=2;
    }
    for(int i=0; i<N; i++){ 
        for(int j=0; j<N; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    
}