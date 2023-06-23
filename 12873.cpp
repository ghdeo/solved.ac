#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> dq(n);
    for(int i=0; i<n; i++)
        dq[i]=i+1;
    unsigned long long cnt=1; 
    int level=1;
    while(dq.size()>1){
        cnt=pow(level,3);
        cnt%=dq.size();
        if(cnt==0)
            dq.pop_back();
        else{
            for(int i=0; i<cnt-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            dq.pop_front();
        }
        level++;
    }
    cout << dq.front();

}