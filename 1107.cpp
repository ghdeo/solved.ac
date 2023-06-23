#include <iostream>
using namespace std;

int chanel = 100;
bool broken[10];
int check(int a){
    if(a==0){
        if(broken[0])
            return 0;
        else
            return 1;
    }
    int len=0;
    while(a>0){
        if(broken[a%10])
            return 0;
        len++;
        a/=10;
    }
    return len;
}
int main(){
    int n,m,tmp;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        broken[tmp]=true;
    }
    int ans=n-100;
    if(ans<0)
        ans = -ans;
    int min=2000000;
    for(int i=0; i<1000001; i++){
        int len = check(i);
        if(len>0){
            int press=i-n;
            if(press<0)
                press= -press;
            if(ans>press+len)
                ans=press+len;
        }
    }
    cout << ans << "\n";
}