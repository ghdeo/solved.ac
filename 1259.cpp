#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int flag = 0;
        if(s=="0") break;
        for(int i=0; i<(s.size()/2); i++){
            if(s[i]!=s[s.size()-i-1]){
                flag = 1;
                break;
            }
        }
        if(flag==0) cout << "yes\n";
        else cout << "no\n";
    }
}