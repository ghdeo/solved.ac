#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int U, N;
    cin >> U >> N;

    vector<pair<string, int> >auction(U);
    string name;
    int price;
    for(int i=0; i<N; i++){
        cin >> name >> price;
        auction[price-1].first=name;
        auction[price-1].second++;
    }
    
    int lowestBid;
    int lowestBidPerson=999999999;
    for(int i=0; i<U; i++){
        if(auction[i].second<lowestBidPerson&&auction[i].second!=0){
            lowestBid=i;
            lowestBidPerson=auction[i].second;
        }
    }

    cout << auction[lowestBid].first.front() << " " << lowestBid+1;
}