#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    string s;
    int title = 665;
    int count = 0;

    while(1){
        s = to_string(title);
        if(s.find("666")!=-1) count++;
        if(count == N){
            cout << title;
            break;
        }
        title++;
    }
}