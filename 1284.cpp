#include <iostream>
#include <string>
using namespace std;

int main(){
    while (1)
    {
        string number;
        cin >> number;
        if(number=="0")
            break;
        int cnt=1;
        for(int i=0; i<number.size(); i++){
            if(number[i]=='1')
                cnt+=2;
            else if(number[i]=='0')
                cnt+=4;
            else
                cnt+=3;
            cnt++;
        }
        cout << cnt << "\n";
    }
    
}