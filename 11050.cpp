#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
int bino(int n, int k){
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int main(){
    int N,K; 
    cin >> N >> K;
    cout << bino(N,K);
}