#include <iostream>
#define MAX 1000001
using namespace std;

int prime[MAX];
bool notPrime[MAX];
int pn;
void eratosthenes(){
    for(int i=2; i<MAX; i++){
        if(notPrime[i]==false){
            prime[pn++]=i;
            for(int j=i*2; j<MAX; j+=i)
                notPrime[j]=true;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    eratosthenes();
    int n;
    while(1){
        cin >> n;
        if(n==0)    
            break;
        for(int i=1; i<pn; i++){
            if(!notPrime[n-prime[i]]){
                cout << n << " = " << prime[i] << " + " << n-prime[i] << "\n";
                break;
            }
        }
    }
}