#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void hanoi(int n, int from, int by, int to){
    if(n==1){
        cout << from << " " << to << "\n";
    }
    else{
        hanoi(n-1,from,to,by);
        cout << from << " " << to << "\n";
        hanoi(n-1,by,from,to);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s = to_string(pow(2,n));
    int x=s.find('.');
    s=s.substr(0,x);
    s[s.length()-1]-=1;
    cout << s << "\n";

    if(n<=20)
        hanoi(n,1,2,3);
}