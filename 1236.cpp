#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n,m;
    cin >> n >> m;
    vector<bool> row(n);
    vector<bool> col(m);
    char tmp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> tmp;
            if(tmp=='X'){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(!row[i]){
            for (int j = 0; j < m; j++)
            {
                if(!col[j]){
                    col[j]=true;
                    break;
                }
            }
            count++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if(!col[i])
            count++;
    }
    cout << count;
}