#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int check(vector<string> v){
    int n=v.size();
    int ans=1;
    for(int i=0; i<n; i++){
        int cnt=1;
        for(int j=1; j<n; j++){
            if(v[i][j]==v[i][j-1])
                cnt++;
            else
                cnt=1;
            if(ans<cnt)
                ans=cnt;
        }
        cnt=1;
        for(int j=1; j<n; j++){
            if(v[j][i]==v[j-1][i])
                cnt++;
            else
                cnt=1;
            if(ans<cnt)
                ans=cnt;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    
    vector<string> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+1<n){
                swap(v[i][j],v[i][j+1]);
                int tmp = check(v);
                if(max<tmp)
                    max=tmp;
                swap(v[i][j],v[i][j+1]);
            }
            if(i+1<n){
                swap(v[i][j],v[i+1][j]);
                int tmp = check(v);
                if(max<tmp)
                    max=tmp;
                swap(v[i][j],v[i+1][j]);
            }
        }
    }
    cout << max << "\n";
}