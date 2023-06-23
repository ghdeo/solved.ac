#include <iostream>
using namespace std;

int a[1000];
int inc[1000];
int dc[1000];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    for(int i=0; i<n; i++){
        inc[i]=1;
        for(int j=0; j<i; j++){
            if(a[i]>a[j]&&inc[i]<inc[j]+1){
                inc[i]=inc[j]+1;
            }
        }

    }
    
    for(int i=n-1; i>=0; i--){
        dc[i]=1;
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]&&dc[i]<dc[j]+1){
                dc[i]=dc[j]+1;
            }
        }
    }

    int max=0;
    for(int i=0; i<n; i++)
        if(max<inc[i]+dc[i]-1)
            max=inc[i]+dc[i]-1;

    cout << max << "\n";
}