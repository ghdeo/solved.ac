#include <iostream>
using namespace std;

int main(){
    int cnt=0;
    char board;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++){
            cin >> board;
            if((i+j)%2==0 && board=='F')
                cnt++;
        }
    
    cout << cnt;
    
}