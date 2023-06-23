#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n,tmp1,tmp2;
    cin >> n;
    vector<pair<int,int> > v;
    for(int i=0; i<n; i++){
        cin >> tmp1 >> tmp2;
        v.push_back(pair<int,int>(tmp1,tmp2));
    }

    int length=0;
    int norm;

    for(int i=0; i<n; i++){
        norm=v[i].second;
        unsigned int cmp=0;
        cmp--;
        for(int j=0; j<n; j++){
            if(i==j)
                continue;
            int sublength=abs(v[i].first-v[j].first);
            if(norm==v[j].second && sublength<cmp){
                cmp=sublength;
            }
        }
        length+=cmp;
    }

    cout << length;
}