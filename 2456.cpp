#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    pair<int ,int> p[3];
    int n,k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> k;
            p[j].first+=k;
            p[j].second+=k*k;
        }
    }
    
    int max=0,flag=1;
    if(p[0]<p[1])
        max=1;
    else if(p[0]==p[1])
        flag=0;
    
    if(p[max]<p[2]){
        max=2;
        flag=1;
    }
    else if(p[max]==p[2])
        flag=0;

    if(flag==1){
        cout << max+1 << " " << p[max].first;
    }
    else    
        cout << flag << " " << p[max].first;
    
}