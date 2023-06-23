#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    cin >> str;

    int total=0;
    stack<char> pipe;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='(')
            pipe.push(str[i]);
        else if(str[i-1]=='('){
            pipe.pop();
            total+=pipe.size();
        }
        else{
            total++;
            pipe.pop();
        }
    }
    cout << total;
}