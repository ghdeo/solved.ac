#include <iostream>
using namespace std;

int main(){
    long long s;
    long long sum=0,num=1;
    cin >>  s;
    int cnt=0;
    while(1){
        sum+=num;
        cnt++;
        if(s<sum){
            cout << cnt-1;
            break;
        }
        num++;
    }
}