#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    vector<double> hole(n);
    for(int i=0; i<n; i++)
        cin >> hole[i];
    sort(hole.begin(),hole.end());

    int tape=1;
    double left=hole[0]-0.5+l;
    for(int i=1; i<n; i++){
        if(left<hole[i]+0.5){
            left=hole[i]-0.5+l;
            tape++;
        }
    }
    cout << tape;
}