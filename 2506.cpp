#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n,tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    
    tmp=0;
    int score=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==1){
            tmp++;
            score+=tmp;
        }
        else if(v[i]==0){
            tmp=0;
        }
    }

    cout << score;
    
}