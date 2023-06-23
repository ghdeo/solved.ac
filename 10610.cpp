#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(char a, char b){
    return a>b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    sort(s.begin(), s.end(), cmp);
    if (s[s.length() - 1] != '0')
        cout << -1;
    else {
        long long sum = 0;
        for (int i=0; i<s.length(); i++) {
            sum += s[i]-'0';
        }
        if (sum % 3 == 0)
            cout << s;
        else
            cout << -1;
    }
}