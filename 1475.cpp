#include <iostream>
#include <string>
using namespace std;

int main(){
    string number;
    cin >> number;

    int arr[10]={0};
    for(int i=0; i<number.size(); i++)
        arr[number[i]-'0']++;
    int minset;
    if((arr[6]+arr[9])%2==0)
        minset=(arr[6]+arr[9])/2;
    else
        minset=(arr[6]+arr[9])/2+1;
    for(int i=0; i<10; i++){
        if(i==6||i==9)
            continue;
        if(arr[i]>minset)
            minset=arr[i];
    }

    cout << minset;
}