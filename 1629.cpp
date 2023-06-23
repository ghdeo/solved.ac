// #include <iostream> //time out
// using namespace std;

// int a,b,c;
// int ans;
// void go(int depth){
//     if(depth==b)
//         return;
//     ans=ans%c*a%c;
//     go(depth+1);
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> a >> b >> c;
//     ans=a;
//     go(0);
//     cout << ans;
// }

#include <iostream>
using namespace std;

long long pow(int a, int b, int c){
    if(b==0)
        return 1;
    long long tmp=pow(a,b/2,c);
    tmp=tmp*tmp%c;
    if(b%2==0)
        return tmp;
    else
        return tmp*a%c;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << pow(a,b,c);
}