#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int mat[10][10];
int d[10];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        d[i]=i;
        for(int j=0; j<n; j++)
            cin >> mat[i][j];
    }
    
    int ans=2147483647;
    do{
        int tmp=0;
        bool possible=true;
        for(int i=0; i<n-1; i++){
            if(mat[d[i]][d[i+1]]==0)
                possible=false;
            else
                tmp+=mat[d[i]][d[i+1]];
        }
        if(possible&&mat[d[n-1]][d[0]]!=0){
            tmp+=mat[d[n-1]][d[0]];
            if(ans>tmp)
                ans=tmp;
        }
    }
    while(next_permutation(d,d+n));

    cout << ans;
}