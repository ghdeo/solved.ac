// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define MAX 10001
// using namespace std;

// bool notPrimeNumber[MAX];
// vector<int> primeNumber;
// void setPrime(){
//     notPrimeNumber[0]=notPrimeNumber[1]=true;
//     for(int i=2;i<MAX;i++){
//         if(!notPrimeNumber[i]){
//             primeNumber.push_back(i);
//             for(int j=i*i; j<MAX; j+=i)
//                 notPrimeNumber[j]=true;
//         }
//     }
// }
// int main(){
//     setPrime();
   
//     int n;
//     cin >> n;
//     while(n--){
//         int num;
//         cin >> num;
//         int x,y;
//         int ans1,ans2;
//         for(int i=0; i<primeNumber.size()&&primeNumber[i]<num; i++){
//             x=primeNumber[i];
//             for(int j=i; j<primeNumber.size()&&primeNumber[j]<num; j++){
//                 y=primeNumber[j];
//                 if(x+y==num){
//                     ans1=x;
//                     ans2=y;
//                 }
//             }
//         }
//         cout << min(ans1,ans2) << " " << max(ans1,ans2) << "\n";
//     }
// }


#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n==1)
        return true;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return false;
    return true;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int num;
        cin >> num;

        for(int i=num/2; i>=2; i--){
            if(isPrime(i)&&isPrime(num-i)){
                cout << i << " " << num-i << "\n";
                break;
            }
        }
    }
}