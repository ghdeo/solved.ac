#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(int mid, int n, vector<int> v){
    int add=0;
    for (int i = 0; i < v.size(); i++)
    {
        add+=v[i]/mid;
        if (add>=n)
        {
            return true;
        }
    }
    return false;
}
int main(){
    int k, n;
    cin >> k >> n;
    vector<int> v;
    int tmp;
    for (int i = 0; i < k; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    
    
    int left=1, right=10000;
    int mid;

    while (left<=right)
    {
        mid=(left+right)/2;
        if (isPossible(mid,n,v))
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    
    cout << mid;
}

