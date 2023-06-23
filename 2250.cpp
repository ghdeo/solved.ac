#include <iostream>
#include <algorithm>
#define left _left
#define right _right
using namespace std;
struct Node {
    int left, right;
    int order, depth;
};
Node a[10001];
int left[10001];
int right[10001];
int cnt[10001];
int order = 0;
void inorder(int node, int depth) {
    if (node == -1) return;
    inorder(a[node].left, depth+1);
    a[node].order = ++order;
    a[node].depth = depth;
    inorder(a[node].right, depth+1);
}
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x].left = y;
        a[x].right = z;
        if (y != -1) cnt[y] += 1;
        if (z != -1) cnt[z] += 1;
    }
    int root = 0;
    for (int i=1; i<=n; i++) {
        if (cnt[i] == 0) {
            root = i;
        }
    }
    inorder(root, 1);
    int maxdepth = 0;
    for (int i=1; i<=n; i++) {
        int depth = a[i].depth;
        int order = a[i].order;
        if (left[depth] == 0) {
            left[depth] = order;
        } else {
            left[depth] = min(left[depth], order);
        }
        right[depth] = max(right[depth], order);
        maxdepth = max(maxdepth, depth);
    }
    int ans = 0;
    int ans_level = 0;
    for (int i=1; i<=maxdepth; i++) {
        if (ans < right[i]-left[i]+1) {
            ans = right[i]-left[i]+1;
            ans_level = i;
        }
    }
    cout << ans_level << ' ' << ans << '\n';
    return 0;
}

// #include <iostream> //memory 초과
// #include <vector>
// #include <cstring>
// using namespace std;

// int n;
// int col=1;
// int row=1;
// vector<int> tree[10001];
// int board[10001][10001];

// void inorder(int node, int depth){
//     if(depth>row)
//         row=depth;
//     if(tree[node][0]!=-1)
//         inorder(tree[node][0],depth+1);
//     board[depth][col++]=node;
//     if(tree[node][1]!=-1)
//         inorder(tree[node][1],depth+1);
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n;
//     int p,l,r;
//     for(int i=0; i<n; i++){
//         cin >> p >> l >> r;
//         tree[p].push_back(l);
//         tree[p].push_back(r);
//     }
//     memset(board,0,sizeof(board));
//     inorder(1,1);

//     int level=-1,width=-1;
//     for(int i=1; i<=row; i++){
//         int left=-1,right=-1;
//         for(int j=1; j<=col-1; j++){
//             if(board[i][j]!=0){
//                 if(left==-1)
//                     left=j;
//                 if(right<j)
//                     right=j;
//             }
//         }
//         if(width<right-left+1){
//             width=right-left+1;
//             level=i;
//         }
//     }
//     cout << level << " " << width;
// }