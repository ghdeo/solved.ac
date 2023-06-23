#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,cnt;
    
    cin >> n;
    while (n--)
    {
        cnt=0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(')
                cnt++;
            else{
                cnt--;
                if(cnt<0)
                    break;
            }
        }
        if(cnt==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}