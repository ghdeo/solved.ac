#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int num0=0,num1=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s[i+1]){
            if(s[i]=='1')
                num1++;
            else if(s[i]=='0')
                num0++;
        }
    }
    
    cout << min(num0,num1);
}