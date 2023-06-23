#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool nextPerm(vector<int> &v){
    int i=v.size()-1;
    while(i>0&&v[i-1]>=v[i])
        i--;
    if(i<=0)
        return false;
    int j=v.size()-1;
    while(v[i-1]>=v[j])
        j--;
    swap(v[i-1],v[j]);
    j=v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        v[i]=i+1;
    
    do{
        for(int i=0; i<n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    while(nextPerm(v));
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++)
//         v[i]=i+1;
//     do{
//         for(int i=0; i<n; i++)
//             cout << v[i] << " ";
//         cout << "\n";
//     }
//     while(next_permutation(v.begin(),v.end()));
// }