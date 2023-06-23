#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return a.first>b.first;
}
int main(){
    int R, C;
    cin >> R >> C;

    vector<string> v(R);
    for(int i=0; i<R; i++){
        cin >> v[i];
    }

    pair<int, int> kayak[9];
    for(int i=0; i<R; i++){
        int count=0;
        for(int j=1; j<C-1; j++){
            if(v[i][j]=='.')
                count++;
            else{
                kayak[v[i][j]-'0'-1].first=count;
                kayak[v[i][j]-'0'-1].second=v[i][j]-'0';
                break;
            }
        }
    }
    sort(kayak,kayak+9,compare);

    int result[9];
    int rank=1;
    int check=kayak[0].first;
    result[kayak[0].second-1]=rank;

    for(int i=1; i<9; i++){
        if(check==kayak[i].first)
            result[kayak[i].second-1]=rank;
        else{
            rank++;
            check=kayak[i].first;
            result[kayak[i].second-1]=rank;
        }
    }
    
    for(int i=0; i<9; i++){
        cout << result[i] << "\n";
    }
}
