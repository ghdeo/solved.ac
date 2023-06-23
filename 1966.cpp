#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m,l;
        cin >> m >> l;

        vector<pair<int, int> > q;
        int p;
        for (int j = 0; j < m; j++)
        {
            cin >> p;
            q.push_back(pair<int, int> (j,p));
        }

        int count = 0;

        while (1)
        {
            int max=0;
            for (int k = 0; k < q.size(); k++)
            {
                if(max<=q[k].second){
                    max=q[k].second;
                }
            }
            
            if (q[0].first==l&&q[0].second==max){
                count++;
                break;
            }
            else if(q[0].second==max){
                count++;
                q.erase(q.begin());
            }
            else{
                q.push_back(pair<int, int>(q[0].first, q[0].second));
                q.erase(q.begin());
            }
        }
        
        cout << count <<"\n";
    }
    
}