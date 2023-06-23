// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N,n;
//     cin >> N;
    
//     int arr[10001] = {0};
//     for(int i=0; i<N; i++){
//         cin >> n;
//         arr[n]++;
//     }
    
//     for(int i=1; i< 10001; i++){
//         for(int j=0; j<arr[i]; j++){
//             cout << i << "\n";
//         }
//     }
// }


#include <iostream>
using namespace std;

int arr[10000000];
int sorted[10000000];
void merge(int *a, int start, int mid, int end){
    int i=start;
    int j=mid+1;
    int k=start;

    while(i<=mid&&j<=end){
        if(a[i]<=a[j])
            sorted[k++]=a[i++];
        else
            sorted[k++]=a[j++];

    }
    int tmp = i>mid ? j : i;
	while(k<=end) 
        sorted[k++] = a[tmp++];
    for(int i=start; i<=end; i++){
        a[i]=sorted[i];
    }
}

void mergesort(int* a, int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << "\n";
}