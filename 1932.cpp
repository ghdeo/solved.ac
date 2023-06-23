#include <iostream>
#include <algorithm>
using namespace std;

int d[500][500];
int arr[500][500];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> arr[i][j];
        }
    }

    d[0][0]=arr[0][0];
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            d[i][j]=d[i-1][j]+arr[i][j];
            if(j>=1&&d[i][j]<d[i-1][j-1]+arr[i][j])
                d[i][j]=d[i-1][j-1]+arr[i][j];
        }
    }

    int max=d[n-1][0];
    for(int i=1; i<n; i++)
        if(max<d[n-1][i])
            max=d[n-1][i];

    cout << max << "\n";
}