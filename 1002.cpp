#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x1,y1,x2,y2,r1,r2;
        int d;

        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d=pow((x2-x1),2)+pow((y2-y1),2);
        int addR=pow((r1+r2),2);
        int subR=pow((r1-r2),2);

        if(x1==x2&&y1==y2){
            if(r1==r2)
                cout << "-1\n";
            else
                cout << "0\n";
        }
        else{
            if(d==addR||d==subR)
                cout << "1\n";
            else if(addR>d&&d>subR)
                cout << "2\n";
            else    
                cout << "0\n";
        }
            
    }
}