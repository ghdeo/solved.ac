#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int N,K;
pair<int,int> jewel[300000];
int bag[300000];
priority_queue<int> pq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for(int i=0; i<N; i++)
        cin >> jewel[i].first >> jewel[i].second;
    for(int i=0; i<K; i++)
        cin >> bag[i];

    sort(jewel,jewel+N);
    sort(bag,bag+K);

    int idx=0;
    long long sum=0;
    for (int i=0; i<K; i++) {
        while (idx < N && bag[i] >= jewel[idx].first) {
            pq.push(jewel[idx].second);
            idx++;
        }
        if (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
    }
    cout << sum;
}