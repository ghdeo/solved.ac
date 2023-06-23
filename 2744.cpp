#include <iostream>
using namespace std;

int main(){
    char ch;
    while((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='Z')
            ch+='a'-'A';
        else
            ch-='a'-'A';
        cout << ch;
    }
}