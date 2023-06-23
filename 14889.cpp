// #include <iostream>
// #include <cmath>
// using namespace std;

// int n;
// int s[21][21];
// bool team[10];
// int ans=100*11;
// void go(int person, int pos){
//     if(person==n/2){
//         int start=0,link=0;
//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=n; j++){
//                 if(team[i]==true&&team[j]==true)
//                     start+=s[i][j];
//                 if(team[i]==false&&team[j]==false)
//                     link+=s[i][j];
//             }
//         }
//         if(ans>abs(start-link))
//             ans=abs(start-link);
//         return;
//     }
//     for(int i=pos; i<n; i++){
//         team[i]=true;
//         go(person+1,i+1);
        
//         team[i]=false;
//     }

// }
// int main(){
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cin >> s[i][j];
//         }
//     }
//     go(0,1);
//     cout << ans;    

// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int s[20][20];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> s[i][j];
    
    int ans=-1;
    for(int i=0; i<(1<<n); i++){
        vector<int> first,second;
        for(int j=0; j<n; j++){
            if(i&(1<<j))
                first.push_back(j);
            else
                second.push_back(j);
        }
        if(first.size()!=n/2)
            continue;
        int t1=0, t2=0;
        for(int l1=0; l1<n/2; l1++){
            for(int l2=0; l2<n/2; l2++){
                if(l1==l2)
                    continue;
                t1+=s[first[l1]][first[l2]];
                t2+=s[second[l1]][second[l2]];
            }
        }
        if(ans==-1||ans>abs(t1-t2))
            ans=abs(t1-t2);
    }
    cout << ans;

}