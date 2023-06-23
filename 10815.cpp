#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary(int n, vector<int> &num){
    int left=0;
    int right=num.size()-1;
    bool flag=false;
    while(left<=right){
        int mid=(left+right)/2;
        if(num[mid]==n)
            return 1;
        if(num[mid]>n)
            right=mid-1;
        else
            left=mid+1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n;
    vector<int> num(n);

    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num.begin(),num.end());
    cin >> m;
    vector<int> find(m);
    for(int i=0; i<m; i++)
        cin >> find[i];

    vector<int> ans(m);
    for(int i=0; i<m; i++)
        ans[i]=binary(find[i],num);
    
    for(int i=0; i<m; i++)
        cout << ans[i] << " ";
}