// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main(){
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n,m;
//     cin >> n >> m;

//     vector<pair<string, string> > v;
//     string site, password;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> site >> password;
//         v.push_back(pair<string, string>(site,password));
//     }
//     sort(v.begin(), v.end());

//     for (int i = 0; i < m; i++)
//     {
//         cin >> site;
//         int left=0, right=v.size();
//         int mid;
//         while(left<=right){
//             mid=(left+right)/2;
//             if(v[mid].first==site){
//                 cout << v[mid].second << "\n";
//                 break;
//             }
//             else if(v[mid].first>site){
//                 right=mid-1;
//             }
//             else{
//                 left=mid+1;
//             }
//         }
//     }
// }


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    string id, pw;
    map <string, string> account;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> pw;
        account[id]=pw;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> id;
        cout << account[id] << "\n";
    }

}