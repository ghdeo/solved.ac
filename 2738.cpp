#include <iostream>
using namespace std;
int mat[100][100];
int main(){
    int n,m,tmp;
    cin >> n >> m;
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin >> tmp;
                mat[j][k]+=tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}