// #include <iostream>
// using namespace std;

// int main(){
//     int e,s,m;
//     cin >> e >> s >> m;

//     int E=1,S=1,M=1,Y=1;
//     while(1){
//         if(E==e&&S==s&&M==m){
//             cout << Y;
//             return 0;
//         }
//         E++;
//         S++;
//         M++;
//         if(E==16)
//             E=1;
//         if(S==29)
//             S=1;
//         if(M==20)
//             M=1;
//         Y++;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int e,s,m;
    cin >> e >> s >> m;
    e--,s--,m--;
    int E=0, S=0, M=0, Y=1;
    while(1){
        if(e==E&&s==S&&m==M){
            cout << Y;
            return 0;
        }

        E++;
        S++;
        M++;
        E%=15;
        S%=28;
        M%=19;
        Y++;
    }
}