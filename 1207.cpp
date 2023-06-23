#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool board[10][10];
vector<vector<string> > block(5);
bool isOut(vector<string> block){
    
}

int main(){
    int l,x,y;
    string tmp;
    cin >> l;
    for(int i=0; i<5; i++){
        cin >> x >> y;
        for(int j=0; j<x; j++){
            cin >> tmp;
            block[i].push_back(tmp);
        }
    }
}

