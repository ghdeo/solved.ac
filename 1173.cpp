#include <iostream>
using namespace std;

int main(){
    int N,m,M,T,R;
    cin >> N >> m >> M >> T >> R;

    int time=0;
    int pulse=m;
    
    if(pulse+T>M){
        cout << "-1";
        return 0;
    }
    while(N){
        time++;
        if(pulse+T<=M){
            pulse+=T;
            N--;
        }
        else{
            pulse-=R;
            if(pulse<m)
                pulse=m;
        }
    }
    cout << time;
}