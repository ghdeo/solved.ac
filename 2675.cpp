#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, R;
    cin >> N;
    string st;
    for(int i = 0; i < N; i++){
        cin >> R;
        cin >> st;
        for(int j = 0; j < st.size(); j++){
            for(int k = 0; k < R; k++){
                cout << st[j];
            }
        }
        cout << "\n";
    }
}