// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int N, M;
//     cin >> N >> M;

//     vector<int> v;
//     int in;
//     for (int i = 0; i < N; i++)
//     {   
//         cin >> in;
//         v.push_back(in);
//     }
//     int sum, ans = 0;
//     for(int i=0; i<N-2; i++){
//         for(int j=i+1; j<N-1; j++){
//             for(int k=j+1; k<N; k++){
//                 sum = v[i]+v[j]+v[k];
//                 if(sum <= M && sum >= ans) ans = sum;
//             }
//         }
//     }

//     cout << ans;

// }

#include <iostream>
using namespace std;

int card[100];
int ans,n,m;
void blackJack(int depth, int idx, int val){
    if(depth==3){
        if(val<=m&&val>ans)
            ans=val;
        return;
    }
    for(int i=idx; i<n; i++)
        blackJack(depth+1,i+1,val+card[i]);
}
int main(){
    cin >> n >> m; 
    for(int i=0; i<n; i++)
        cin >> card[i];
    blackJack(0,0,0);
    cout << ans;
}