#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string num1, num2, ans="";
    cin >> num1 >> num2;

    if(num1.size()<num2.size()){
        swap(num1,num2);
    }

    int add, carry=0, digit1, digit2;
    digit1=num1.length();
    digit2=num2.length();

    while(digit1>0||digit2>0){
        int n1=0;
        if(digit1>0){
            n1=num1[--digit1]-'0';
        }
        int n2=0;
        if(digit2>0){
            n2=num2[--digit2]-'0';
        }

        int cur=n1+n2+carry;
        carry=cur/10;
        cur%=10;

        ans+=cur+'0';
    }
    if(carry){
        ans+=carry+'0';
    }
    
    for(int i=ans.length()-1; i>=0; i--){
        cout << ans[i];
    }
}