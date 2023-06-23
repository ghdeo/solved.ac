#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string first="0";
    string second="1";
    string res="1";
    for(int i=1; i<n; i++){
        res=strAdd(first,second);
        first=second;
        second=res;
    }
    if(n==0)
        cout << "0\n";
    else
        cout << res << "\n";
}



// string add(string a, string b){
//     int sum=0;
//     string ret;
//     while(!a.empty()||!b.empty()||sum){
//         if(!a.empty()){
//             sum+=a.back()-'0';
//             a.pop_back();
//         }
//         if(!b.empty()){
//             sum+=b.back()-'0';
//             b.pop_back();
//         }
//         ret.push_back((sum%10)+'0');
//         sum/=10;
//     }
//     reverse(ret.begin(),ret.end());
//     return ret;
// }