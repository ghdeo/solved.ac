#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;

    deque<int> dq;
    for(int i=1; i<=n; i++)
        dq.push_back(i);

    bool check=true;
    int cnt=0;
    while(!dq.empty()){
        if(check){
            for(int i=0; i<k-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else{
            for(int i=0; i<k-1; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        cnt++;
        if(cnt==m){
            check=!check;
            cnt=0;
        }
    }

    
}