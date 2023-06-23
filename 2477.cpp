#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    int k;
    cin >> k;

    int a,b;
    queue<pair<int,int> > q;
    int max=0, maxidx=0;
    for(int i=0; i<6; i++){
        cin >> a >> b;
        if(max<b){
            max=b;
            maxidx=a;
        }
        q.push(make_pair(a,b));
    }
    while(1){
        pair<int,int> tmp=q.front();
        q.pop();
        q.push(tmp);
        if(tmp.first==maxidx)
            break;
    }
    int sq1=1;
    sq1=sq1*q.front().second;
    q.pop();
    sq1=sq1*q.front().second;
    q.pop();
    q.pop();
    int sq2=1;
    sq2=sq2*q.front().second;
    q.pop();
    sq2=sq2*q.front().second;
    int sum=sq1+sq2;
    cout << sum*k;
}