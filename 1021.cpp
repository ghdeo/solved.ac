#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    deque<int> dq;
    for(int i=1; i<=n; i++)
        dq.push_back(i);
    

    int left,right;
    int cnt=0;
    while(m--){
        int num;
        cin >> num;

        for(int i=0; i<dq.size(); i++){
            if(dq[i]==num){
                left=i;
                right=dq.size()-i;
                break;
            }
        }

        if(left<=right){
            while(1){
                if(dq.front()==num)
                    break;
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        }
        else{
            cnt++;
            while(1){
                if(dq.back()==num)
                    break;
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_back();
        }
    }

    cout << cnt;
}