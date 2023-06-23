#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int w,h;
    cin >> w >> h;
    for(int i=0; i<n; i++){
        int length;
        cin >> length;
        if(length<=w||length<=h||length*length<=(w*w+h*h))
            cout << "DA\n";
        else 
            cout << "NE\n";
    }
}