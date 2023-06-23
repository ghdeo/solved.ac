#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> m >> n >> x >> y;
        x--,y--;
        bool flag=false;
        for(int i=x; i<n*m; i+=m){
            if(i%n==y){
                flag=true;
                cout << i+1 << "\n";
                break;
            }
        }
        if(!flag)
            cout << "-1\n";
    }
}