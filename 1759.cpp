#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> val;
int L,C;
bool check(string pw){
    int vowel=0,consonant=0;
    for(int i=0; i<pw.size(); i++){
        if(pw[i]=='a'||pw[i]=='e'||pw[i]=='i'||pw[i]=='o'||pw[i]=='u')
            vowel++;
        else
            consonant++;
    }
    if(vowel>=1&&consonant>=2)
        return true;
    else
        return false;
}

void go(int idx, string pw){
    if(pw.length()==L){
        if(check(pw)){
            cout << pw << "\n";
        }
        return;
    }
    if(idx>=val.size())
        return;
    go(idx+1,pw+val[idx]);
    go(idx+1,pw);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L >> C;
    char tmp;
    for(int i=0; i<C; i++){
        cin >> tmp;
        val.push_back(tmp);
    }
    sort(val.begin(),val.end());
    go(0,"");
}