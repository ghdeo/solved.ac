#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n,rem;
    cin >> n;
    stack<int> stk;
    while(n>0){
        rem=n%8;
        n/=8;
        stk.push(rem);
    }
    while(!stk.empty()){
        cout << stk.top();
        stk.pop();
    }
}