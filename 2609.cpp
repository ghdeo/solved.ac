#include <iostream>
using namespace std;

// int GCD(int a, int b){
//     while (a!=0&&b!=0)
//     {
//         if(a>b) a=a-b;
//         else b=b-a;
//     }
//     return a+b;
// }
int GCD(int a, int b){
   
   
   if(b==0) return a;
   else return GCD(b, a%b);
}

int LCM(int a, int b){
    return a*b/GCD(a,b);
}
int main(){
    int a,b;
    cin >> a >> b;

    cout << GCD(a,b) << "\n" << LCM(a,b);
}