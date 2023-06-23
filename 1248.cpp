// #include <iostream>
// #include <string>
// using namespace std;

// int matrix[10][10];
// int ans[10];
// int n;
// bool ok(){
//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=i; j<n; j++){
//             sum+=ans[j];
//             if(matrix[i][j]==0){
//                 if(sum!=0)
//                     return false;
//             }
//             else if(matrix[i][j]>0){
//                 if(sum<=0)
//                     return false;
//             }
//             else if(matrix[i][j]<0){
//                 if(sum>=0)
//                     return false;
//             }
//         }
//     }
//     return true;
// }
// bool go(int index){
//     if(index==n)
//         return ok();
//     for(int i=-10; i<=10; i++){
//         ans[index]=i;
//         if(go(index+1))
//             return true;
//     }
//     return false;
// }
// int main(){
//     string s;
//     cin >> n >> s;

//     int cnt=0;
//     for (int i=0; i<n; i++) {
//         for (int j=i; j<n; j++) {
//             if (s[cnt] == '0') {
//                 matrix[i][j] = 0;
//             } else if (s[cnt] == '+') {
//                 matrix[i][j] = 1;
//             } else {
//                 matrix[i][j] = -1;
//             }
//             cnt += 1;
//         }
//     }
//     go(0);
//     for(int i=0; i<n; i++)
//         cout << ans[i] << " ";
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int n;
// int matrix[10][10];
// int ans[10];

// bool ok(){
//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=i; j<n; j++){
//             sum+=ans[j];
//             if(matrix[i][j]==0){
//                 if(sum!=0)
//                     return false;
//             }
//             else if(matrix[i][j]>0){
//                 if(sum<=0)
//                     return false;
//             }
//             else{
//                 if(sum>=0)
//                     return false;
//             }
//         }
//     }
//     return true;
// }
// bool go(int index){
//     if(index==n){
//         return ok();
//     }
//     if(matrix[index][index]==0){
//         ans[index]=0;
//         go(index+1);
//     }
//     for(int i=1; i<=10; i++){
//         ans[index]=matrix[index][index]*i;
//         if(go(index+1))
//             return true;
//     }
//     return false;
// }
// int main(){
//     string s;
//     cin >> n >> s;

//     int cnt=0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             if(s[cnt]=='0'){
//                 matrix[i][j]=0;
//             }
//             else if(s[cnt]=='+'){
//                 matrix[i][j]=1;
//             }
//             else{
//                 matrix[i][j]=-1;
//             }
//             cnt++;
//         }
//     }
//     go(0);
//     for(int i=0; i<n; i++)
//         cout << ans[i] << " ";
// }

#include <iostream>
#include <string>
using namespace std;

int n;
int matrix[10][10];
int ans[10];

bool ok(int index){
    int sum=0;
    for(int i=index; i>=0; i--){
        sum+=ans[i];
        if(matrix[i][index]==0){
            if(sum!=0)
                return false;    
        }
        else if(matrix[i][index]>0){
            if(sum<=0)
                return false;
        }
        else if(matrix[i][index]<0){
            if(sum>=0)
                return false;
        }
    }
    return true;
}
bool go(int index){
    if(index==n)
        return true;
    if(matrix[index][index]==0){
        ans[index]=0;
        return ok(index)&&go(index+1);
    }
    for(int i=1; i<=10; i++){
        ans[index]=matrix[index][index]*i;
        if(ok(index)&&go(index+1))
            return true;
    }
    return false;
}
int main(){
    string s;
    cin >> n >> s;

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(s[cnt]=='0'){
                matrix[i][j]=0;
            }
            else if(s[cnt]=='+'){
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=-1;
            }
            cnt++;
        }
    }
    go(0);
    for(int i=0; i<n; i++)
        cout << ans[i] << " ";
}