#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    long long ans=0;
    int k=10;
    for (int i = 0; i < 2; i++)
    {
        cin >> s;
        if(s=="black")
            ans+=0*k;
        else if(s=="brown")
            ans+=1*k;
        else if(s=="red")
            ans+=2*k;
        else if(s=="orange")
            ans+=3*k;
        else if(s=="yellow")
            ans+=4*k;
        else if(s=="green")
            ans+=5*k;
        else if(s=="blue")
            ans+=6*k;
        else if(s=="violet")
            ans+=7*k;
        else if(s=="grey")
            ans+=8*k;
        else if(s=="white")
            ans+=9*k;
        k=k/10;
    }
    cin >> s;
    if(s=="black")
            ans*=1;
        else if(s=="brown")
            ans*=10;
        else if(s=="red")
            ans*=100;
        else if(s=="orange")
            ans*=1000;
        else if(s=="yellow")
            ans*=10000;
        else if(s=="green")
            ans*=100000;
        else if(s=="blue")
            ans*=1000000;
        else if(s=="violet")
            ans*=10000000;
        else if(s=="grey")
            ans*=100000000;
        else if(s=="white")
            ans*=1000000000;
    cout << ans;
}