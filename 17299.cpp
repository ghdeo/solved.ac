#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int freq[1000001];
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> NGF(n);
    stack<int> stk;

    for(int i=0; i<n; i++){
        cin >> v[i];
        freq[v[i]]++;
    }

    for(int i=0; i<v.size(); i++){
        while(!stk.empty()){
            if(freq[v[stk.top()]]<freq[v[i]]){
                NGF[stk.top()]=v[i];
                stk.pop();
            } 
            if(stk.empty()||freq[v[stk.top()]]>=freq[v[i]]){
                stk.push(i);
                break;
            }
        }
        if(stk.empty())
            stk.push(i);
    }
    while(!stk.empty()){
        NGF[stk.top()]=-1;
        stk.pop();
    }

    for(int i=0; i<n; i++)
        cout << NGF[i] << " ";
    cout << "\n";
}