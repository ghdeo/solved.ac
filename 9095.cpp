// #include <iostream>
// using namespace std;
// int arr[12]={1,1,2};
// int dp(int n){
//     if(arr[n]>0)
//         return arr[n];
//     for(int i=3; i<=n; i++){
//         arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
//     }
//     return arr[n];
// }

// int main(){
//     int T,n;
//     cin >> T;
//     while(T--){
//         cin >> n;
//         cout << dp(n) << "\n";
//     }
// }

#include <iostream>
using namespace std;

int go(int sum, int goal){
    if(sum>goal)
        return 0;
    if(sum==goal)
        return 1;
    int ans=0;
    for(int i=1; i<=3; i++)
        ans+=go(sum+i,goal);
    return ans;
    
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << go(0,n) << "\n";
    }
}