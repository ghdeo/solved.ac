#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int val[13];
int ans[6];
int k;
void go(int depth, int start){
    if(depth==6){
        for(int i=0; i<6; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=start; i<k; i++){
        ans[depth]=val[i];
        go(depth+1,i+1);
    }
}
int main(){
    while(1){
        cin >> k;
        if(k==0)
            break;
        for(int i=0; i<k; i++)
            cin >> val[i];
        go(0,0);
        cout << "\n";
    }
}