#include <iostream>
using namespace std;

long long cnt[1001];
long long sum,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;

    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        sum+=x; //누적합
        cnt[sum%m]++; //누적합 나머지 count
    }
    for(int i=0; i<=1000; i++)
        ans+=cnt[i]*(cnt[i]-1)/2; //nC2 /* cnt[i]개중 2개 선택해는 가지수 */
    ans+=cnt[0];

    cout << ans;
}