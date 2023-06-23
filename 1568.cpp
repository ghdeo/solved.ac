#include <iostream>
using namespace std;

int main(){
    long long k;
    cin >> k;

    long long time=0,cnt=0;
    while(1){
        cnt++;
        if(k==0)    
            break;
        if(k<cnt)
            cnt=1;
        
        k-=cnt;
        time++;
    }
    
    cout << time;
}