#include <iostream>
using namespace std;

int main(){
    int A,B,X,Y;
    int leftArea,upperArea;
    int n;
    cin >> A >> n;
    B=A;

    for(int i=0; i<n; i++){
        cin >> X >> Y;
        if(X>=A||Y>=B)
            continue;
        
        leftArea=Y*A;
        upperArea=X*B;
        if(upperArea>=leftArea)
            A=X;
        else
            B=Y;
    }
    cout << A*B;
}