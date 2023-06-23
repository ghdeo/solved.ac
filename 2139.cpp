#include <iostream>
using namespace std;

int main(){
    int d, m, y;
    int leep_year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int year[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    while (1)
    {
    cin >> d >> m >> y;
    if(d==0 && m==0 && y==0) break;
    int count = 0;
    if(y%4==0 && y%100 !=0 || y % 400 ==0){
        for(int i = 0; i < m-1; i++){
            count += leep_year[i];
        }
        count += d;
    }
    else{
        for(int i = 0; i < m-1; i++){
            count += year[i];
        }
        count += d;
    }
    cout << count << "\n";
    }
    
    
}