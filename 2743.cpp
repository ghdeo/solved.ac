#include <iostream>
using namespace std;

int main(){
    char ch;
    int cnt=0;
    while((ch=getchar())!='\n'){
        cnt++;
    }
    cout << cnt;
}