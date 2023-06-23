#include <iostream>
using namespace std;

int whiteboad[100][100]={0};
int main(){
    int n;
    cin >> n;
    int cnt=0;
    for (int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++){
                if(whiteboad[a+j][b+k]==1)
                    continue;
                whiteboad[a+j][b+k]=1;
                cnt++;
            }
    }
    
    cout << cnt;
}