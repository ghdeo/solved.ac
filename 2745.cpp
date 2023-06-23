#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    int sum=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]<='9'){
            sum+=(s[i]-'0')*pow(n,s.length()-(i+1));   
        }
        else{
            sum+=(s[i]+10-'A')*pow(n,s.length()-(i+1));
        }
    }
    cout << sum << "\n";
}