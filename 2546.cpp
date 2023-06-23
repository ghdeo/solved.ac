#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> clanguage;

    int t;
    cin >> t;

    while(t--){
        long long n,m,tmp;
        double c_mean=0, e_mean=0;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> tmp;
            c_mean+=tmp;
            clanguage.push_back(tmp);
        }
        c_mean/=n;
        for(int i=0; i<m; i++){
            cin >> tmp;
            e_mean+=tmp;
        }
        e_mean/=n;

        int cnt=0;
        for(int i=0; clanguage[i]<c_mean; i++){
            if(clanguage[i]>e_mean)
                cnt++;
        }
        cout << cnt;
    }
}