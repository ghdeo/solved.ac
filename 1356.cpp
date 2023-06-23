#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    cin >> num;

    bool flag=false;

    for (int i = 0; i < num.length()-1; i++)
    {
        int left=num[0]-'0', right=num.back()-'0';
        for (int k = 1; k <= i; k++)
        {
            left*=num[k]-'0';
        }
        for (int k = num.length()-2; k > i ; k--)
        {
            right*=num[k]-'0';
        }
        if(left==right)
            flag=true;
    }
    
    if(flag)
        cout << "YES";
    else 
        cout << "NO";
}