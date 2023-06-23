#include <iostream>
#define TARGETNUMBER 100
using namespace std;

int main(){
    int score=0,dif=0;
    int mushroom;
    for(int i=0; i<10; i++){
        cin >> mushroom;
        int prescore=score;
        score+=mushroom;
        if(TARGETNUMBER-score>0)
            continue;
        else{
            if(TARGETNUMBER-prescore<score-TARGETNUMBER)
                score=prescore;
            break;
        }
    }
    cout << score;
}