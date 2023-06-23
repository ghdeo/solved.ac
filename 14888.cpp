// #include <iostream>
// #include <limits.h>
// using namespace std;

// int num[11];
// int op[4];
// int n;
// long long ansMax=LLONG_MIN,ansMin=LLONG_MAX;

// void find(int depth, long long res, int add, int sub, int mul, int div){
//     if(depth==n){
//         if(ansMax<res)
//             ansMax=res;
//         if(ansMin>res)
//             ansMin=res;
//         return;
//     }
//     for(int i=0; i<4; i++){
//         if(i==0&&add!=0)
//             find(depth+1,res+num[depth],add-1,sub,mul,div);
//         else if(i==1&&sub!=0)
//             find(depth+1,res-num[depth],add,sub-1,mul,div);
//         else if(i==2&&mul!=0)
//             find(depth+1,res*num[depth],add,sub,mul-1,div);
//         else if(i==3&&div!=0)
//             find(depth+1,res/num[depth],add,sub,mul,div-1);
//     }
// }
// int main(){
//     cin >> n;
//     for(int i=0; i<n; i++)
//         cin >> num[i];
//     for(int i=0; i<4; i++)
//         cin >> op[i];
    
//     find(1,num[0],op[0],op[1],op[2],op[3]);
//     cout << ansMax << "\n" << ansMin << "\n";
// }

#include <iostream>
#include <limits.h>
using namespace std;

int n,m;
int num[11];
int op[4];
long long ansMax=LLONG_MIN, ansMin=LLONG_MAX;

void get(int idx, long long result){
    if(idx==n){
        if(ansMax<result)
            ansMax=result;
        if(ansMin>result)
            ansMin=result;
        return;
    }
    for(int i=0; i<4; i++){
        if(op[i]<=0)
            continue;
        op[i]--;
        if(i==0)
            get(idx+1,result+num[idx]);
        else if(i==1)
            get(idx+1,result-num[idx]);
        else if(i==2)
            get(idx+1,result*num[idx]);
        else if(i==3)
            get(idx+1,result/num[idx]);
        op[i]++;
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    for(int i=0; i<4; i++)
        cin >> op[i];
    get(1,num[0]);
    cout << ansMax << "\n" << ansMin << "\n";
}