#include <iostream>
using namespace std;

int main(){
    int n,tmp,cnt=0;
    int arr[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> tmp;
    for(int i=0; i<n; i++)
        if(tmp==arr[i])
            cnt++;
    cout << cnt << "\n";
}
