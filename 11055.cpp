#include <iostream>
using namespace std;

int a[1000];
int d[1000];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    d[0]=a[0];
    for(int i=1; i<n; i++){
        d[i]=a[i];
        for(int j=0; j<i; j++){
            if(a[i]>a[j]&&d[i]<d[j]+a[i]){
                d[i]=d[j]+a[i];
            }
        }
    }
    
    int max=d[0];
    for(int i=1; i<n; i++)
        if(max<d[i])
            max=d[i];

    cout << max << "\n";
}