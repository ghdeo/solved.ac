#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool alpha[26];
int ans,k;
vector<string> words;
void initAlpha(){
    alpha['a'-'a']=true;
    alpha['c'-'a']=true;
    alpha['i'-'a']=true;
    alpha['n'-'a']=true;
    alpha['t'-'a']=true;
}
bool check(string wd){
    for(int i=0; i<wd.length(); i++){
        if(alpha[wd[i]-'a']==false)
            return false;
    }
    return true;
}
void go(int depth,int idx){
    if(depth==k-5){
        int tmp=0;
        for(int i=0; i<words.size(); i++){
            if(check(words[i]))
                tmp++;
        }
        if(tmp>ans)
            ans=tmp;
        return;
    }
    for(int i=idx; i<26; i++){
        if(alpha[i]==true)
            continue;
        alpha[i]=true;
        go(depth+1,i+1);
        alpha[i]=false;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n >> k;
    if(k<5){
        cout << 0;
        return 0;
    }
    else if(k==26){
        cout << n;
        return 0;
    }
    string tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        words.push_back(tmp);
    }
    initAlpha();
    go(0,0);
    cout << ans;
}