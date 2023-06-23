#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool boad_vertical[10][10];
bool boad_horizontal[10][10];

bool isAccurate(int x, int y, int n){
    if(x<0||y<0||x>=n||y>=n)
        return false;

    return true;  
}
int main(){
    char direction[4]={'U', 'D', 'L', 'R'};
    char state[4]={'.', '-', '|', '+'};
    
    int n;
    string move;
    cin >> n >> move;

    int x=0, y=0;
    int preX, preY;
    for(int i=0; i<move.size(); i++){
        
        if(move[i]=='U'){
            if(!isAccurate(x,y-1,n))
                continue;
            boad_vertical[y][x]=true;
            boad_vertical[--y][x]=true;
        }

        else if(move[i]=='D'){
            if(!isAccurate(x,y+1,n))
                continue;
            boad_vertical[y][x]=true;
            boad_vertical[++y][x]=true;
        }
        else if(move[i]=='L'){
            if(!isAccurate(x-1,y,n))
               continue;
            boad_horizontal[y][x]=true;
            boad_horizontal[y][--x]=true;
        }
        else if(move[i]=='R'){
            if(!isAccurate(x+1,y,n))
               continue;
            boad_horizontal[y][x]=true;
            boad_horizontal[y][++x]=true;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(boad_horizontal[i][j]&&boad_vertical[i][j])
                cout << "+";
            else if(boad_horizontal[i][j]&&!boad_vertical[i][j])
                cout << "-";
            else if(!boad_horizontal[i][j]&&boad_vertical[i][j])
                cout << "|";
            else 
                cout << ".";
        }
        cout << "\n";
    }
}