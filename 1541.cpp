#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans=0;
    string num="";
    bool isMinus = false;
    for(int i=0; i<=s.length(); i++){
        if(s[i]=='+'||s[i]=='-'||i==s.length()){
            if(isMinus){
                ans-=stoi(num);
                num="";
            }
            else{
                ans+=stoi(num);
                num="";
            }
        }
        else
            num+=s[i];
        if(s[i]=='-')
            isMinus=true;   
    }
    cout << ans;
}