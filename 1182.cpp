#include <iostream>
using namespace std;

int val[20];
int n,s,cnt;

void go(int idx, int sum){
    if(idx==n){
        if(sum==s){
            cnt++;
        }
        return;
    }
    
    go(idx+1,sum+val[idx]);
    go(idx+1,sum);
}
int main(){
    cin >> n >> s;
    for(int i=0; i<n; i++)
        cin >> val[i];
    go(0,0);
    if(s==0)
        cnt--;
    cout << cnt;
}