#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    vector<string> v(n);

    for(int i=0; i<s.length(); i++)
        if((i/n)%2==0)
            v[i%n].push_back(s[i]);
        else
            v[n-1-(i%n)].push_back(s[i]);

    for(int i=0; i<n; i++)
        cout << v[i];
}