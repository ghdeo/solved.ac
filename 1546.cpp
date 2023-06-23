#include <iostream> //평균
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n;
    vector<int> v;

    for (int i = 0; i< N; i++){
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());

    double ans = 0;
    for(int i= 0; i <N; i++){
        ans += (double)v[i] / (double)v.back() * 100;
    }
    ans = (ans)/N;

    cout << ans;

    return 0;
}