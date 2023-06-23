#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> order(n);
    for(int i=0; i<n; i++)
        cin >> order[i];
    
    deque<int> card;
    for(int i=n-1; i>=0; i--){
        if(order[i]==1){
            card.push_front(n-i);
        }
        else if(order[i]==2){
            int tmp=card.front();
            card.pop_front();
            card.push_front(n-i);
            card.push_front(tmp);
        }
        else{
            card.push_back(n-i);
        }
    }

    for(int i=0; i<n; i++)
        cout << card[i] << " "; 
}