#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<pair<int,int> > v;
    int rank[50] = {0};
    cin >> n;
    int x, y;

    for (int i = 0; i < n; i++)
    {
       cin >> x >> y;
       v.push_back(pair<int,int>(x,y));
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(v[i].first<v[(j+i+1)%n].first&&v[i].second<v[(j+i+1)%n].second){
                ++rank[i];
            }
        }
        ++rank[i];   
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << rank[i] << " ";
    }
    
}