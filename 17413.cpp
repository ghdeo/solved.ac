#include <iostream>
#include <string>
#include <stack>
using namespace std;

void printStack(stack<char> &st){
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
int main(){
    string s;
    getline(cin,s);

    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            printStack(st);
            cout << s[i];
        }
        else if(s[i]!='<')
            st.push(s[i]);
        if(s[i]=='<'){
            printStack(st);
            while(s[i]!='>')
                cout << s[i++];
            cout << s[i];
        }
    }
    printStack(st);
    cout << "\n";
}