#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(n==0){
        cout << "0\n";
        return 0;
    }
    vector<int> book;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        book.push_back(tmp);
    }
    int box=1;
    int weight=0;
    for(int i=n-1; i>=0; i--){
        weight+=book[i];
        if(weight>m){
            box++;
            weight=book[i];
        }
    }
    cout << box << "\n";
}