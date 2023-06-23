#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main(){
    int a,b,m;
    cin >> a >> b >> m;
    vector<int> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i];

    int dec=0;
    for(int i=0; i<m; i++){
        dec+=v[i]*pow(a,m-(i+1));
    }

    stack<int> stk;
    int rem;
    while(dec>0){
        rem=dec%b;
        dec/=b;
        stk.push(rem);
    }

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
}