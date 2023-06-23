#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Y=0, M=0;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Y+=(tmp/30+1)*10;
        M+=(tmp/60+1)*15;
    }
    if(Y>M)
        cout << "M " << M;
    else if(Y<M)
        cout << "Y " << Y;
    else
        cout << "Y M " << M;
}