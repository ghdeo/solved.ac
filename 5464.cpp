#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int parkingLot[101];
int parkingPrice[101];
int carWeight[2001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> parkingPrice[i];
    for(int i=1; i<=m; i++)
        cin >> carWeight[i];
    
    int ans=0,car;
    int full=0;
    queue<int> q;
    for(int i=1; i<=2*m; i++){
        cin >> car;
        if(car>=0){
            if(full<n){
                for(int j=1; j<=n; j++){
                    if(parkingLot[j]==0){
                        parkingLot[j]=car;
                        break;
                    }
                }
                full++;
            }
            else
                q.push(car);
        }
        else{
            for(int j=1; j<=n; j++){
                if(parkingLot[j]==car*(-1)){
                    parkingLot[j]=0;
                    ans+=parkingPrice[j]*carWeight[car*(-1)];
                    full--;
                    if(!q.empty()){
                        parkingLot[j]=q.front();
                        q.pop();
                        full++;
                    }
                    break;
                }
            }
        }
    }
    
    cout << ans;

}