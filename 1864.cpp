#include <iostream>
#include <cmath>
using namespace std;

int main(){
    while(1){
        char arr[9];
        cin >> arr;

        int size = 0;
        while(arr[size] != '\0'){
            if(arr[size] == '#') return 0;
            size++;
        }
        for(int i = 0; i < size; i++){
            if(arr[i] == '-') arr[i] = 0;
            else if(arr[i] == '\\') arr[i] = 1;
            else if(arr[i] == '(') arr[i] = 2;
            else if(arr[i] == '@') arr[i] = 3;
            else if(arr[i] == '?') arr[i] = 4;
            else if(arr[i] == '>') arr[i] = 5;
            else if(arr[i] == '&') arr[i] = 6;
            else if(arr[i] == '%') arr[i] = 7;
            else if(arr[i] == '/') arr[i] = -1;
        }
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += arr[i] * pow(8, size - i - 1);
        }
        cout << sum << "\n";
    }
}