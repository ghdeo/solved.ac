#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string factorial[101][101];
string strAdd(string a, string b){
    int sum=0;
    string res;
    while(!a.empty()||!b.empty()||sum){
        if(!a.empty()){
            sum+=a.back()-'0';
            a.pop_back();
        }
        if(!b.empty()){
            sum+=b.back()-'0';
            b.pop_back();
        }
        res.push_back((sum%10)+'0');
        sum/=10;
    }
    reverse(res.begin(),res.end());
    return res;
}
string combination(int n, int r){
    if(n==r||r==0)
        return "1";
    string &result= factorial[n][r];
    if(result!="")
        return result;
    result=strAdd(combination(n-1,r-1),combination(n-1,r));
    return result;
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << combination(n,m);
}