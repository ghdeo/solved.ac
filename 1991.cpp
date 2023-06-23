#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
char tree[26][2];
int visit[26];
void preorder(char node){
    if(node!='.'&&!visit[node-'A']){
        visit[node-'A']=1;
        cout << node;
        preorder(tree[node-'A'][0]);
        preorder(tree[node-'A'][1]);
    }
}
void inorder(char node){
    if(node!='.'&&!visit[node-'A']){
        visit[node-'A']=1;
        inorder(tree[node-'A'][0]);
        cout << node;
        inorder(tree[node-'A'][1]);
    }
}
void postorder(char node){
    if(node!='.'&&!visit[node-'A']){
        visit[node-'A']=1;
        postorder(tree[node-'A'][0]);
        postorder(tree[node-'A'][1]);
        cout << node;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    char a,b,c;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        tree[a-'A'][0]=b;
        tree[a-'A'][1]=c;
    }
    memset(visit,0,26*sizeof(int));
    preorder('A');
    cout << "\n";
    memset(visit,0,26*sizeof(int));
    inorder('A');
    cout << "\n";
    memset(visit,0,26*sizeof(int));
    postorder('A');
    cout << "\n";
}