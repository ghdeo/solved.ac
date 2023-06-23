#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    
    vector<int> d(n);
    vector<int> a(n);
    for(int i=0; i<n; i++){
        d[i]=1;
        a[i]=-1;
        for(int j=0; j<i; j++){
            if(v[i]>v[j]&&d[i]<d[j]+1){
                d[i]=d[j]+1;
                a[i]=j;
            }
        }
    }
    
    int max=d[0],idx=0;
    for(int i=0; i<n; i++){
        if(max<d[i]){
            max=d[i];
            idx=i;
        }
    }
    stack<int> ans;
    ans.push(v[idx]);
    while(1){
        if(a[idx]==-1)
            break;
        ans.push(v[a[idx]]); 
        idx=a[idx];
    }

    cout << max << "\n";
    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }
}