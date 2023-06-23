#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    vector<string> v;
    string s;

    int n;
    cin >> n;
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    
    for (int i = 0; i < v[0].length(); i++)
    {
        for (int j = 0; j < v.size()-1; j++)
        {
            if(v[j][i]==v[j+1][i])
                flag=true;
            else{
                flag=false;
                break;
            }     
        }
        if(!flag)
            s[i]='?';
    }
    cout << s;
}