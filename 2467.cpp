#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> liquid(n);
    for(int i=0; i<n; i++)
        cin >> liquid[i];

    vector<long long>::iterator left=liquid.begin();
    vector<long long>::iterator right=liquid.end()-1;
    long long sum=LLONG_MAX;
    pair<long long, long long> ans;
    while(left<right){
        if(abs(sum)>abs(*left+*right)){
            sum=*left+*right;
            ans.first=*left;
            ans.second=*right;
        }
        if(*left+*right>0)
            right--;
        else if(*left+*right<0)
            left++;
        else
            break;
    }
    cout << ans.first << " " << ans.second;
}