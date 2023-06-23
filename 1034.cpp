// #include <iostream> //홀짝구분 분배
// #include <string>
// #include <algorithm>
// using namespace std;

// int N,M,K;
// int arr[50][50];
// int ans=0;
// int val[50];

// void copy(int arr[50][50], int tmp[50][50]){
//     for(int i=0; i<N; i++)
//         for(int j=0; j<M; j++)
//             tmp[i][j] = arr[i][j];
// }
// void go(int depth, int x){
//     if(depth==M-1){
//         if(x%2==1)
//             val[depth]=1;

//         int tmp[50][50];
//         copy(arr,tmp);
//         for(int j=0; j<M; j++){
//             if(val[j]==0)
//                     continue;
//             for(int i=0; i<N; i++){
//                 if(tmp[i][j]==0)
//                     tmp[i][j]=1;
//                 else
//                     tmp[i][j]=0;
//             }
//         }
//         int cnt=0;
//         for(int i=0; i<N; i++){
//             bool flag=true;
//             for(int j=0; j<M; j++){
//                 if(tmp[i][j]==0){
//                     flag=false;
//                     break;
//                 }
//             }
//             if(flag)
//                 cnt++;
//         }
//         ans=max(ans,cnt);
//         return;
//     }
//     if(x>0){ //odd
//         val[depth]=1;
//         go(depth+1,x-1);
//     } 
//     val[depth]=0;
//     go(depth+1,x); // even
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> N >> M;
//     for(int i=0; i<N; i++){
//         string s;
//         cin >> s;
//         for(int j=0; j<M; j++)
//             arr[i][j] = s[j]-'0';
//     }
//     cin >> K;
//     go(0,K);
//     cout << ans;
// }
    
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int height, width;
    int ans = -1;
    string arr[50];

    cin >> height >> width;

    for (int y = 0; y < height; y++)
    {
        cin >> arr[y];
    }

    int k;
    cin >> k;

    for (int i = 0; i < height; i++)
    {
        int zeroCount = 0;
        for (int h = 0; h < width; h++)
        {
            if (arr[i][h] == '0')
            {
                zeroCount++;
            }
        }
        int sum = 0;
        if (zeroCount <= k && zeroCount % 2 == k % 2)
        {
            for (int y = 0; y < height; y++)
            {
                if (arr[i] == arr[y])
                {
                    sum++;
                }
            }
        }
        ans = max(sum, ans);
    }
    cout << ans;
    return 0;
}


// #include <iostream> //전체 경우 탐색 시간초과
// #include <string>
// #include <algorithm>
// using namespace std;

// int N,M,K;
// int arr[50][50];
// int ans=0;
// int val[50];

// void copy(int arr[50][50], int tmp[50][50]){
//     for(int i=0; i<N; i++)
//         for(int j=0; j<M; j++)
//             tmp[i][j] = arr[i][j];
// }
// void go(int depth, int x){
//     if(depth==M-1){
//         val[M-1]=x;
//         int tmp[50][50];
//         copy(arr,tmp);
//         for(int i=0; i<M; i++){
//             if(val[i]%2==0)
//                 continue;
//             for(int j=0; j<N; j++){
//                 if(tmp[j][i]==0)
//                     tmp[j][i] = 1;
//                 else
//                     tmp[j][i] = 0;
//             }
//         }

//         int cnt=0;
//         for(int i=0; i<N; i++){
//             bool flag=true;
//             for(int j=0; j<M; j++){
//                 if(tmp[i][j]==0){
//                     flag=false;
//                     break;
//                 } 
//             }
//             if(flag)
//                 cnt++;
//         }

//         ans=max(ans,cnt);
//         return;
//     }
//     for(int i=0; i<=x; i++){
//         val[depth]=i;
//         go(depth+1,x-i);
//     }
        
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> N >> M;
//     for(int i=0; i<N; i++){
//         string s;
//         cin >> s;
//         for(int j=0; j<M; j++)
//             arr[i][j] = s[j]-'0';
//     }
//     cin >> K;
//     go(0,K);
//     cout << ans;
// }