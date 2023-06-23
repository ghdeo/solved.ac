#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Medal
{
private:
    
public:
    int country;
    int gold;
    int silver;
    int bronze;
    Medal();
    ~Medal();
};
Medal::Medal()
{
}
Medal::~Medal()
{
}
bool cmp(Medal x, Medal y){
    if(x.gold>y.gold)
        return true;
    else if(x.gold==y.gold){
        if(x.silver>y.silver)
            return true;
        else if(x.silver==y.silver){
            if(x.bronze>y.bronze)
                return true;
        }
    }
    return false;
}
Medal x[1000];
int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> x[i].country >> x[i].gold >> x[i].silver >> x[i].bronze;
    sort(x,x+n,cmp);

    int ans=0,val=0;
    for(int i=0; i<n; i++){
        if(x[i].country==k){
            ans=i;
            break;
        }
    }
    for(int i=ans-1;;i--){
        if(x[i].gold!=x[ans].gold||x[i].silver!=x[ans].silver||x[i].bronze!=x[ans].bronze)
            break;
        val++;
    }
    cout << ans-val+1;
}