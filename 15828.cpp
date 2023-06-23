#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;

    int packet,buf=0;
    while(1){
        cin >> packet;
        if(packet==-1)
            break;
        else if(packet==0){
            q.pop();
            buf--;
        }
        else if(buf<n){
            q.push(packet);
            buf++;
        } 
    }
    if(q.empty())
        cout << "empty\n";
    else{
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
    }
}