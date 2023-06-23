#include <iostream>
using namespace std;

int n;
int T[16];
int P[16];
int ans;
void go(int day, int sum){
    if(day==n+1){
        if(ans<sum)
            ans=sum;
        return;
    }
    if(day>n+1)
        return;
    go(day+1,sum);
    go(day+T[day],sum+P[day]);
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> T[i] >> P[i];
    go(1,0);
    cout << ans;
}