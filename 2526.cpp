#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(1001);
    int n,p;
    cin >> n >> p;
    int k=n;
    int cnt=1;
    while (!nums[k])
    {
        nums[k]=cnt++;
        k=k*n%p;
    }
    
    cout << cnt - nums[k] << "\n";
}