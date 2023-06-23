#include <iostream>
using namespace std;
int student[1000][5];
int cnt[1000]={0};

int main(){
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
        for (int j = 0; j < 5; j++)
            cin >> student[i][j];
    
    for (int i = 0; i < num; i++)
        for (int j = 0; j < num; j++)
            for (int k = 0; k < 5; k++)
                if(student[i][k]==student[j][k]){
                    cnt[i]++;
                    break;
                }
    
    int max=0, maxIdx=0;
    for (int i = 0; i < num; i++)
    {
        if(max<cnt[i]){
            max=cnt[i];
            maxIdx=i;
        }
        else if(max==cnt[i]){
            if(maxIdx>i)
                maxIdx=i;
        }
    }
    
    cout << maxIdx+1;
    
}