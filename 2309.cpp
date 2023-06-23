#include <iostream>
#include <algorithm>
using namespace std;


int height[9];
int main(){
    int sum=0;
    for(int i=0; i<9; i++){
        cin >> height[i];
        sum+=height[i];
    }
    sum-=100;
    int a,b;
    bool flag=false;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(height[i]+height[j]==sum){
                a=height[i];
                b=height[j];
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    sort(height,height+9);
    for(int i=0; i<9; i++){
        if(height[i]!=a&&height[i]!=b)
            cout << height[i] << "\n";
    }
}