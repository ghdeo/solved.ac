#include <iostream>
using namespace std;

int main(){
    int max=0;
    int train=0;
    for(int i=0; i<10; i++){
        int leave, board;
        cin >> leave >> board;
        train+=board-leave;
        if(max<train)
            max=train;
    }
    cout << max << "\n";
}