#include <iostream>
using namespace std;

int main(){
    int arr[8];
    for(int i=0; i<8; i++){
        cin >> arr[i];
    }

    int dif = 0;
    for(int i=0; i<7; i++){
        dif = arr[i]- arr[i+1];
        if(dif < -1 || dif > 1) {
            cout << "mixed";
            return 0;
        }
    }
   if (dif == -1) cout << "ascending";
   else cout << "descending";

   return 0;
}