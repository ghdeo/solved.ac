#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    cin >> s;

    
    for(int i=0; i<n-1; i++){
        if(s<=0)
            break;
        int max=v[i];
        int maxIdx=i;
        for(int j=i+1; j<n&&s>=j-i; j++){
            if(max<v[j]){
                max=v[j];
                maxIdx=j;
            }
        }
        if(maxIdx!=i){
            int change=0;
            for(int j=maxIdx; j>i; j--){
                v[j]=v[j-1];
                change++;
            }
            v[i]=max;
            s-=change;
        }
    }
    for(int i=0; i<n; i++)
        cout << v[i] << " ";

}