#include <iostream>
#include <string>
using namespace std;

int main(){
    string st;
    getline(cin, st);
    
    int count = 1;
    for(int i = 0; i < st.size(); i++){
        if(st[i] == ' ') count++;
    }
    if(st[0] == ' ') count--;
    if(st[st.length()-1] == ' ') count--;
    
    cout << count;
}