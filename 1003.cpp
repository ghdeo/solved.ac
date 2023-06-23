#include <iostream>
using namespace std;
int arr[41]={0,1,1};

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    if(arr[n]!=0){
        return arr[n];
    }
    else{
        return arr[n]=fibonacci(n-1)+fibonacci(n-2);
    }
}
 
int main(){
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        int x;
        cin >> x;
        if(x==0){
            cout << "1 0" << "\n";
        }
        else if(x==1){
            cout << "0 1" << "\n";
        }
        else{
            fibonacci(x);
            cout << arr[x-1] << " " << arr[x] << "\n";
        }
    }
}