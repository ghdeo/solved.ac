#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        char ch,tmp;
        stack<char> st;
        while (1)
        {
            ch=getchar();
            if(ch=='\n'){
                while (!st.empty())
                {
                    tmp=st.top();
                    cout << tmp;
                    st.pop();
                }
                break;
            }
            if(ch==' '){
                while (!st.empty())
                {
                    tmp=st.top();
                    cout << tmp;
                    st.pop();
                }
                cout << " ";
            }
            else{
                st.push(ch);
            }
        }
        cout << "\n";
        
        
    }
    
}
