#include <iostream>
#include <algorithm>
using namespace std;

int n;
int tree[100000];
bool cmp(int a, int b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> tree[i];
    sort(tree,tree+n,cmp);

    int day=1;
    int ans=0;
    for(int i=0; i<n; i++){
        if(day+tree[i]>ans)
            ans=day+tree[i];
        day++;
    }
    cout << ans+1;
}