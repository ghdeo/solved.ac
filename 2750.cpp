// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> v;
//     int N;
//     cin >> N;
//     int n;
//     for(int i = 0; i < N; i++){
//         cin >> n;
//         v.push_back(n);
//     }

//     sort(v.begin(), v.end());
//     for(int i = 0; i < N; i++){
//         cout << v[i] << "\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int arr[1000];

void swap(int *a, int *b){
    int tmp = *a;
    *a=*b;
    *b=tmp;
}
void bbsort(int *arr,int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    bbsort(arr,n);
    for(int i=0; i<n; i++)
        cout << arr[i] << "\n";
}