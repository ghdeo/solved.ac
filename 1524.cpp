#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> jun(n);
        vector<int> bi(m);
        for (int i = 0; i < n; i++)
            cin >> jun[i];
        for (int i = 0; i < m; i++)
            cin >> bi[i];
        sort(jun.begin(),jun.end());
        sort(bi.begin(),bi.end());
        
        int flag;
        while (1)
        {
            if(jun[0]==bi[0])
                bi.erase(bi.begin());
            else if(jun[0]<bi[0])
                jun.erase(jun.begin());
            else if(jun[0]>bi[0])
                bi.erase(bi.begin());
            
            if(!jun.empty()&&bi.empty()){
                flag=0;
                break;
            }
            else if(jun.empty()&&!bi.empty()){
                flag=1;
                break;
            }
            else if(jun.empty()&&bi.empty()){
                flag=2;
                break;
            }
        }
        
        switch (flag)
        {
        case 0:
            cout << "S\n";
            break;
        case 1:
            cout << "B\n";
            break;
        case 2:
            cout << "C\n";
            break;
        default:
            break;
        }
    }
    
}