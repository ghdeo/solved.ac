#include <iostream>
#include <vector>
using namespace std;
char arr[101][101];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }


    int row=0, col=0;
    for(int i=1; i<=n; i++){
        int count=0;
        for(int j=1; j<=n; j++){
            if(arr[i][j]=='.')
                count++;
            else{
                if(count>=2){
                    row++;
                }
                count=0;
            }
        }
        if(count>=2)
            row++;
    }
    for(int i=1; i<=n; i++){
        int count=0;
        for(int j=1; j<=n; j++){
            if(arr[j][i]=='.')
                count++;
            else{
                if(count>=2){
                    col++;
                }
                count=0;
            }
        }
        if(count>=2)
            col++;
    }
    cout << row << " " << col;
}