#include <iostream>
#include <string>
#include <stack>
using namespace std;

int val[26];
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> val[i];
    }

    stack<double> stk;
    string ans;
    int len=s.length();
    for(int i=0; i<len; i++){
        if(s[i]>='A'&&s[i]<='Z'){
            stk.push(val[s[i]-'A']);
        }
        else if(!stk.empty()){
            double tmp = stk.top();
            stk.pop();
            if(s[i]=='+'){
                tmp+=stk.top();
            }
            else if(s[i]=='-'){
                tmp=stk.top()-tmp;
            }
            else if(s[i]=='*'){
                tmp*=stk.top();
            }
            else if(s[i]=='/'){
                tmp=stk.top()/tmp;
            }
            stk.pop();
            stk.push(tmp);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << stk.top() << "\n";
}