#include <iostream>
#include <vector>
using namespace std;

vector<int> tree;
void maketree(int start,int end){
    if(start>=end)
        return;
    if(start==end-1){
        cout << tree[start] << "\n";
        return;
    }
    int idx=start+1;
    while(idx<end){
        if(tree[start]<tree[idx])
            break;
        idx++;
    }
    maketree(start+1,idx);
    maketree(idx,end);
    cout << tree[start] << "\n";
}
int main(){
    int a;
    while(cin >> a){
        if(a==EOF)
            break;
        tree.push_back(a);
    }
    maketree(0,tree.size());
}