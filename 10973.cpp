#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool prevPerm(vector<int> &v){
    int i=v.size()-1;
    while(i>0&&v[i-1]<=v[i])
        i--;
    if(i<=0)
        return false;
    
    int j=v.size()-1;
    while(v[j]>=v[i-1])
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
        cin >> v[i];
    
    if(!prevPerm(v))
        cout << "-1\n";
    else{
        for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
    }
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
//         cin >> v[i];
    
//     if(prev_permutation(v.begin(),v.end())){
//         for(int i=0; i<v.size(); i++)
//             cout << v[i] << " ";
//     }
//     else 
//         cout << "-1\n";
// }