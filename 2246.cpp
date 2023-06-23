#include <iostream>
#include <vector>
using namespace std;

bool compair(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> >condo;
    vector<bool> isCandidate(n);

    for(int i=0; i<n; i++){
        int D,C;
        cin >> D >> C;
        condo.push_back(pair<int,int>(D,C));
        isCandidate[i]=true;
    }
    sort(condo.begin(),condo.end(),compair);
    
    for(int i=0; i<n-1; i++){
        if(isCandidate[i])
            for(int j=i+1; j<n; j++){
                if(condo[i].first==condo[j].first&&condo[i].second>condo[j].second){
                    isCandidate[i]=false;
                    break;
                }
                else if(condo[i].first==condo[j].first&&condo[i].second<condo[j].second)
                    isCandidate[j]=false;
                else if(condo[i].second<=condo[j].second)
                    isCandidate[j]=false;
            }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
        if(isCandidate[i])
            cnt++;

    cout << cnt << "\n";
}