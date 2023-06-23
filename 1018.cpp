#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(int x, int y, string* s, string* chess){
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(s[x+i][y+j]!= chess[i][j]) cnt++;
        }
    }
    return cnt;
}

int main(){
    string chess_b[8];
    string chess_w[8];

    for(int i=1; i<5; i++){
        chess_b[(i-1)*2]="BWBWBWBW";
        chess_b[1+(i-1)*2]="WBWBWBWB";
        chess_w[(i-1)*2]="WBWBWBWB";
        chess_w[1+(i-1)*2]="BWBWBWBW";
    }

    int n,m;
    cin >> n >> m;
    string s[m];
    for(int i=0; i<m; i++){
        cin >> s[i];
    }
    vector<int> bw, wb;

    for(int i=0; i+8<=n; i++){
        for(int j=0; j+8<=m; j++){
            bw.push_back(cmp(i,j,s,chess_b));
            wb.push_back(cmp(i,j,s,chess_w));
        }
    }
    sort(bw.begin(),bw.end());
    sort(wb.begin(),wb.end());

    int ans = bw[0] < wb[0] ? bw[0] : wb[0];
    cout << ans;
}