#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ball=1;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a==ball)
            ball=b;
        else if(b==ball)
            ball=a;
    }
    cout << ball;
}