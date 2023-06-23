#include <iostream>
#include <vector>
using namespace std;

int order[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> order[i];
    
    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        vector<int>::iterator iter = ans.begin();
        for(int j=0; j<order[i]; j++)
            iter++;
        ans.insert(iter,i+1);
    }

    for(int i=0; i<n; i++)
        cout << ans[i] << " ";
    
    
    
    
}