#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int key, int arr[], int N){
    int low = 0;
    int high = N-1;
    int mid;

    while (low <= high)
    {
       mid = (low+high)/2;
       if(key==arr[mid]) return true;
       else if(key<arr[mid]) high = mid-1;
       else low = mid+1;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[100001];
    int N,M;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    cin >> M;
    int m;
    for (int i = 0; i < M; i++)
    {
        cin >> m;
        if (binarySearch(m,arr,N))
            cout << "1\n";
        else 
            cout << "0\n";
        
    }
    return 0;
}