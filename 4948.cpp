#include <iostream>
#include <cmath>
#define MAX 246913
using namespace std;

bool primeNumber[MAX];

int main(){
    primeNumber[1]=true;
    for(int i=2; i<MAX; i++){
        if(!primeNumber[i]){
            for(int j=i*2; j<MAX; j+=i)
                primeNumber[j]=true;
        }
    }

    int n;
    while(1){
        cin >> n;
        if(n==0)
            break;
        int cnt=0;
        for(int i=n+1; i<=2*n; i++)
            if(!primeNumber[i])
                cnt++;
        cout << cnt << "\n";
    }
}