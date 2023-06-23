#include <iostream>
#include <string>

using namespace std;
bool check(string s){
    bool flag[26] = {false};

    for(int i=0; i<s.length(); i++){
        if(flag[s[i]-'a'])
            return false;
        else{
            flag[s[i]-'a']=true;
            char tmp = s[i];
            while(1){
                if(tmp!=s[++i]){
                    i--;
                    break;
                }
            }
        }
    }
    return true;
}
int main(){
    int n, count=0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if(check(s))
            count++;
    }

    cout << count;
}