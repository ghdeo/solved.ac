#include <iostream>
using namespace std;

bool notSelfNum[10001];
int checkSelfNum(int n){
    int num=n;
    while(1){
        if(n==0)
            break;
        num+=n%10;
        n/=10;
    }
    return num;
}
int main(){
    
    for(int i=1; i<=10000; i++){
        int idx=checkSelfNum(i);
        if(idx<=10000)
            notSelfNum[idx]=true;
    }
    for(int i=1; i<=10000; i++){
        if(!notSelfNum[i])
            cout << i << "\n";
    }
}