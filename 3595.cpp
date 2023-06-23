#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b, c;
    int min_extent = INT_MAX;
    
    a=n;
    b=1;
    c=1;
    while(a>=b){
        int tmp = 2*(a*b+b*c+c*a);
        if(tmp<min_extent)
            min_extent = tmp;
        
        
    }
}