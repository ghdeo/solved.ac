#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int cnt=0;
    int sum=0;
    int min=-1;
    for(int i=m; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0)
                cnt++;
        }
        if(cnt==2){
            sum+=i;
            if(min==-1)
                min=i;
        }
        cnt=0;
    }
    if(min==-1)
        cout << "-1\n";
    else
        cout << sum << "\n" << min << "\n";
}