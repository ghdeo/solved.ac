#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);

    for(int i=0; i<n; i++)
        cin >> A[i];
    for(int i=0; i<n; i++)
        cin >> B[i];
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),cmp);
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=A[i]*B[i];
    cout << sum;


}