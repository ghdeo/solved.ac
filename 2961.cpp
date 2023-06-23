#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int n;
long long ans=LLONG_MAX;
int s[10];
int b[10];
bool used[10];
void go(int cnt, int idx, int prod, int sum){
    if(cnt>=1){
        long long tmp=abs(prod-sum);
        if(tmp<ans)
            ans=tmp;
    }
    for(int i=idx; i<n; i++){
        if(used[i]==true)
            continue;
        used[i]=true;
        go(cnt+1, idx+1,prod*s[i],sum+b[i]);
        used[i]=false;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> s[i] >> b[i];
    go(0,0,1,0);
    cout << ans;
}