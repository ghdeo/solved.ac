#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    queue<int> q;
    while(n--){
        cin >> s;
        if(s=="push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s=="pop"){
            if(q.empty())
                cout << "-1\n";
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(s=="size"){
            cout << q.size() << "\n";
        }
        else if(s=="empty"){
            cout << q.empty() << "\n";
        }
        else if(s=="front"){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.front() << "\n";
        }
        else if(s=="back"){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.back() << "\n";
        }
    }
}