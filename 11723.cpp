// #include <iostream>
// #include <cstring>
// #include <string>
// using namespace std;

// int arr[21]={0};
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int m,x;
//     cin >> m;
//     string s;
//     while (m--)
//     {
//         cin >> s;
//         if(s=="add"){
//             cin >> x;
//             if(arr[x]==0)
//                 arr[x]=1;
//         }
//         else if(s=="remove"){
//             cin >> x;
//             if(arr[x]==1)
//                 arr[x]=0;
//         }
//         else if(s=="check"){
//             cin >> x;
//             if(arr[x]==1)
//                 cout << "1\n";
//             else
//                 cout << "0\n";
//         }
//         else if(s=="toggle"){
//             cin >> x;
//             if(arr[x]==1)
//                 arr[x]=0;
//             else    
//                 arr[x]=1;
//         }
//         else if(s=="all"){
//             for(int i=1; i<21; i++){
//                 arr[i]=1;
//             }
//         }
//         else if(s=="empty"){
//             memset(arr, 0, sizeof(arr));
//         }
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main(){
    int m;
    cin >> m;
    string s;
    int bitmask=0;
    while(m--){
        cin >> s;
        if(s=="add"){
            int x;
            cin >> x;
            bitmask=bitmask|(1<<x);
        }
        else if(s=="remove"){
            int x;
            cin >> x;
            bitmask=bitmask&~(1<<x);
        }
        else if(s=="check"){
            int x;
            cin >> x;
            if(bitmask&(1<<x))
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if(s=="toggle"){ 
            int x;
            cin >> x;
            bitmask=bitmask^(1<<x);
        }
        else if(s=="all"){
            bitmask=(1<<20)-1;
        }
        else if(s=="empty"){
            bitmask=0;
        }
    }
}