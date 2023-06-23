#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n, tmp;
    cin >> n;

    vector<unsigned long long> input;
    for(int i=0; i<n; i++){
        cin >> tmp;
        input.push_back(tmp);
    }
    
    
    deque<unsigned long long> result;
    while(input.size()>0){
        while(input.back()%2==0){
            tmp=input.back();
            input.pop_back();
            input.push_back(tmp/2);
            input.push_back(tmp/2);
        }
        result.push_front(input.back());
        input.pop_back();
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> tmp;
        cout << result[tmp-1] << "\n";
    }
}