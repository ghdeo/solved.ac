#include <iostream>//손익분기
using namespace std;

int main(){
  
    int a, b, c;
    int prod;

    cin >> a >> b >> c;
    prod = a * b * c;
    
    int arr[10] = {0};
    while(prod != 0){
        arr[prod % 10] += 1;
        prod /= 10;
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] <<"\n";
    }
    
    return 0;
}
