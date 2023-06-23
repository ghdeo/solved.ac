#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    int tmp=0;
    
    stack<int> calculate;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(')
            calculate.push(-1);
        else if(s[i]=='[')
            calculate.push(-3);
        else if(calculate.empty()){
            cout << 0;
            return 0;
        }
        else{
            if(calculate.top()==-1&&s[i]==')'){
                calculate.pop();
                calculate.push(2);
            }
            else if(calculate.top()==-3&&s[i]==']'){
                calculate.pop();
                calculate.push(3);
            }
            else{
                tmp=0;
                while(calculate.top()!=-1&&calculate.top()!=-3){
                    tmp+=calculate.top();
                    calculate.pop();
                    if(calculate.empty()){
                        cout << 0;
                        return 0;
                    }
                }
                if(calculate.top()==-1||s[i]==')'){
                    tmp*=2;
                    calculate.pop();
                }
                else if(calculate.top()==-3&&s[i]==']'){
                    tmp*=3;
                    calculate.pop();
                }
                else{
                    cout << 0;
                    return 0;
                }
                calculate.push(tmp);
            }
        }
    }
    int ans=0;
    while(!calculate.empty()){
        if(calculate.top()==-1||calculate.top()==-3){
            cout << 0;
            return 0;
        }
        ans+=calculate.top();
        calculate.pop();
    }
    cout << ans;
}