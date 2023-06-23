// #include <iostream> // O(N!)
// using namespace std;

// int ans[10];
// bool check[10];
// void NM(int idx, int start, int n, int m){
//     if(idx==m){
//         for(int i=0; i<m; i++)
//             cout << ans[i] << " ";
//         cout << "\n";
//         return;
//     }
//     for(int i=start; i<=n; i++){
//         if(check[i])
//             continue;
//         check[i]=true;
//         ans[idx]=i;
//         NM(idx+1,i+1,n,m);
//         check[i]=false;
//     }

// }
// int main(){
//     int n, m;
//     cin >> n >> m;

//     NM(0,1,n,m);
// }


#include <iostream> // O(2^n)
using namespace std;

int ans[10];
void NM(int index, int selected, int n, int m){
    if(selected==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    if(index>n)
        return;
    ans[selected] = index;
    NM(index+1,selected+1,n,m);
    ans[selected] = 0;
    NM(index+1,selected,n,m);
}

int main(){
    int n, m;
    cin >> n >> m;
    NM(1,0,n,m);
}