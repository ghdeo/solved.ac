#include <iostream>

int main(){
    int x,y;
    std::cin >> x >> y;
    long long ans=1;
    for(int i=1; i<x+y+(!y?1:0); i++)
        ans+=i*6;
    std::cout << ans+y;
}