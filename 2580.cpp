#include <iostream>
using namespace std;

int board[9][9];
bool check(int x, int y, int val){
    for(int i=0; i<9; i++){
        if(board[x][i]==val)
            return false;
        if(board[i][y]==val)
            return false;
    }
    for(int i=(x/3)*3; i<(x/3)*3+3; i++){
        for(int j=(y/3)*3; j<(y/3)*3+3; j++){
            if(board[i][j]==val){
                return false;
            }
        }
    }
    return true;
}

void go(int x,int y){
    if(x==9){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        exit(0);
    }
    if(y==9)
        go(x+1,0);
    if(board[x][y]==0){
        for(int i=1; i<=9; i++){
            if(check(x,y,i)){
                board[x][y]=i;
                go(x,y+1);
                board[x][y]=0;
            }
        }
    }
    else
        go(x,y+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            cin >> board[i][j];
    go(0,0);
}


// #include <iostream>
// using namespace std;

// int board[9][9];
// bool checkHorizon(int x, int y, int val){
//     for(int i=0; i<9; i++){
//         if(y==i)
//             continue;
//         if(board[x][i]==val)
//             return false;
//     }
//     return true;    
// }
// bool checkVertical(int x, int y, int val){

//     for(int i=0; i<9; i++){
//         if(i==x)
//             continue;
//         if(board[i][y]==val)
//             return false;
//     }
//     return true;
// }
// bool checkBox(int x, int y, int val){
//     for(int i=x/3; i<x/3+3; i++){
//         for(int j=y/3; j<y/3+3; j++){
//             if(i==x&&j==y)
//                 continue;
//             if(board[i][j]==val)
//                 return false;
//         }
//     }
//     return true;
// }
// bool sudoku(int x, int y, int val, int depth){
//     if(depth==81)
//         return true;
//     if(!checkBox(x,y,val)||!checkHorizon(x,y,val)||!checkVertical(x,y,val)){
//         return false;
//     }
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9; j++){
//             if(board[i][j]!=0)
//                 continue;
//             for(int k=1; k<=9; k++){
//                 board[i][j]=k;
//                 if(sudoku(i,j,k,depth+1))
//                     return true;
//                 board[i][j]=0;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     for(int i=0; i<9; i++)
//         for(int j=0; j<9; j++)
//             cin >> board[i][j];
    
//     sudoku(0,0,1,0);
//     cout << "\n";
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9; j++){
//              cout << board[i][j] << " ";
//         }
//         cout << "\n";
//     }
        
// }

