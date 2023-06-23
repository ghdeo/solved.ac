#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> left,right;
    string s;
    int n;
    cin >> s >> n;
    for(int i=0; i<s.size(); i++)
        left.push(s[i]);

    char tmp;
    while(n--){
        cin >> tmp;
        if(tmp=='L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(tmp=='D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(tmp=='B'){
            if(!left.empty())
                left.pop();
        }
        else{
            cin >> tmp;
            left.push(tmp);
        }
    }

    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
    cout << "\n";
}