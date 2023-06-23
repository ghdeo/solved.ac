#include <iostream>
using namespace std;

int main(){
    while (1){
        int a;
        cin >> a;
        if(a==0)
            break;
        int split,cut;
        int leaf=1;
        for(int i=0; i<a; i++){
            cin >> split >> cut;
            leaf*=split;
            leaf-=cut;
        }
        cout << leaf << "\n";
    }
    
}