#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,budget;
    int m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    cin >> budget;

    sort(v.begin(),v.end());
    int left=0, right=v.back();
    int sum,ans;
    while (left<=right)
    {
        sum=0;
        int mid=(left+right)/2;
        for (int i = 0; i < v.size(); i++)
        {
            sum+=min(mid,v[i]);
        }
        if(sum<=budget){
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout << ans;
}