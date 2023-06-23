#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        long long x, y;
        long long result, max = 0;
        cin >> x >> y;
        while(max * max <= y - x){
            max++;
        }
        max--;
        long long alpha;
        alpha = (long long)ceil((double)((y-x) - max*max) / (double)max);
        result = 2*max - 1 + alpha;

        cout << result << "\n";
    }
    
    

    

   
}