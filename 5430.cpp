#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string order,str,num="";
        int n;
        cin >> order >> n >> str;
        deque<int> dq;
        for(int i=0; i<str.length(); i++){
            if(isdigit(str[i]))
                num+=str[i];
            else{
                if(!num.empty()){
                    dq.push_back(stoi(num));
                    num="";
                }
            }
        }

        bool front=true;
        bool error=false;
        for(int i=0; i<order.length(); i++){
            if(order[i]=='R'){
                front=!front;
            }
            else if(order[i]=='D'){
                if(dq.empty()){
                    error=true;
                    break;
                }
                if(front==true)
                    dq.pop_front();    
                else if(front==false)
                    dq.pop_back();
            }
        }
        
        if(error==true)
            cout << "error\n";
        else{
            cout << "[";
            int size=dq.size();
            if(front==true){
                for(int i=0; i<size; i++){
                    if(dq.size()!=1)
                        cout << dq.front() << ",";
                    else
                        cout << dq.front();
                    dq.pop_front();
                }
            }
            else if(front==false){
                for(int i=0; i<size; i++){
                    if(dq.size()!=1)
                        cout << dq.back() << ",";
                    else
                        cout << dq.back();
                    dq.pop_back();
                }
            }
            cout << "]\n";
        }


    }
}