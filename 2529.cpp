// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool check(vector<char> &v, vector<int> &perm){
//     for(int i=0; i<v.size(); i++){
//         if((v[i]=='<'&&perm[i]>perm[i+1])||(v[i]=='>'&&perm[i]<perm[i+1]))
//             return false;
//     }
//     return true;
// }
// int main(){
//     int k;
//     cin >> k;
//     vector<char> v(k);
//     for(int i=0; i<k; i++)
//         cin >> v[i];
    
//     vector<int> big,small;
//     for(int i=0; i<k+1; i++){
//         small.push_back(i);
//         big.push_back(9-i);
//     }

//     do{
//         if(check(v,small))
//             break;
//     }
//     while(next_permutation(small.begin(),small.end()));
//     do{
//         if(check(v,big))
//             break;
//     }
//     while(prev_permutation(big.begin(),big.end()));
//     for(int i=0; i<big.size(); i++)
//         cout << big[i];
//     cout << "\n";
//     for(int i=0; i<small.size(); i++)
//         cout << small[i];
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k;
vector<char> ineq;
vector<string> perm;
bool num[10];

bool check(string perm){
    for(int i=0; i<ineq.size(); i++){
        if((ineq[i]=='<'&&perm[i]>perm[i+1])||(ineq[i]=='>'&&perm[i]<perm[i+1]))
            return false;
    }
    return true;
}

void go(int depth, string ans){
    if(depth==k+1){
        if(check(ans))
            perm.push_back(ans);
    }
    for(int i=0; i<=9; i++){
        if(num[i]==true)
            continue;
        num[i]=true;
        go(depth+1,ans+to_string(i));
        num[i]=false;
    }
}

int main(){
    cin >> k;
    char tmp;
    for(int i=0; i<k; i++){
        cin >> tmp;
        ineq.push_back(tmp);
    }
    go(0,"");
    sort(perm.begin(),perm.end());
    cout << perm.back() << "\n";
    cout << perm.front();
}