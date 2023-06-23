#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> NGE(n);
    vector<int> A(n);
    stack<int> stk;

    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        while(!stk.empty()){
            if(A[stk.top()]<A[i]){
                NGE[stk.top()]=A[i];
                stk.pop();
            }
            if(stk.empty()||A[stk.top()]>=A[i]){
                stk.push(i);
                break;
            } 
        }
        if(stk.empty())
            stk.push(i);
    }
    while(!stk.empty()){
        NGE[stk.top()]=-1;
        stk.pop();
    }
    for(int i=0; i<n; i++){
        cout << NGE[i] << " ";
    }
    cout << "\n";
}