#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    int alpha[26];
    memset(alpha, -1, 26 * sizeof(int));
    
    for(int i = 0; i < S.length(); i++){
        if(alpha[(int)S[i]-97] < 0) alpha[(int)S[i]-97] = i;
    }
    for (int i = 0; i < 26; i++){
        cout << alpha[i] << ' ';
    }
}


