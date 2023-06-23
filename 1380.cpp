#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
   int num=1;
   while(1){
        int arr[222]={0};
        vector<string> v;
        int n;
        cin >> n;
        if(n==0)
            break;
        cin.ignore();
        
        for(int i=0; i<n; i++){
            string name;
            getline(cin, name);
            v.push_back(name);
        }
        for(int i=0; i<2*n-1; i++){
            int a;
            char b;
            cin >> a >> b;
            arr[a-1]++;
        }
        for(int i=0; i<n; i++){
            if(arr[i]!=2)
                cout << num << " " << v[i] << "\n";
        }
        num++;
   }
}