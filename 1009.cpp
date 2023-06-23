#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a, b, ans=1;
        cin >> a >> b;

        for(int j=0; j<b; j++){
            ans=ans*a%10;
        }
        if(ans==0)
            cout << "10\n";
        else
            cout << ans << "\n";
    }
}