#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,b,rem;
    cin >> n >> b;
    
    string s="";
    while(n>0){
        rem=n%b;
        if(rem<10)
            s+=(char)(rem+'0');
        else
            s+=(char)(rem-10+'A');
        n/=b;
    }
    reverse(s.begin(),s.end());
    cout << s << "\n";
}