#include <iostream>
using namespace std;

int main(){
    int count, n;
    for(int i=0; i<3; i++){
        count=0;
        for (int j = 0; j < 4; j++)
        {
            cin >> n;
            if(n) count++;
        }
        if(count==4){
            cout << "E\n";
        }
        else if(count==3){
            cout << "A\n";
        }
        else if(count==2){
            cout << "B\n";
        }
        else if(count==1){
            cout << "C\n";
        }
        else 
            cout << "D\n";
    }
}