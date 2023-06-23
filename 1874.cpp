#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> base;
    stack<int> derive;
    int* arr = new int[n];
    int j = 0;
    for(int i = n; i>0; i--){
        base.push(i);
        cin >> arr[j++];
    }
    
    bool flag = true;
    queue<char> ans;
    for(int i=0; i<j; i++){
        if(!base.empty()&&arr[i]>=base.top()){
            do
            {
                derive.push(base.top());
                base.pop();
                ans.push('+');
            } while (arr[i]!=derive.top());
            ans.push('-');
            derive.pop();
        }
        else{
            if(derive.top()==arr[i]){
                ans.push('-');
                derive.pop();
            }
            else{
                flag = false;
                break;
            }
        }
    }


    if(flag){
        while (!ans.empty())
        {
            cout << ans.front() << "\n";
            ans.pop();
        }
    }
    else{
        cout << "NO";
    }
    delete[] arr;
}