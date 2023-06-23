#include <iostream>
#include <vector>
using namespace std;

class DATA
{
private:
    DATA* next;
   
public:
    vector<int> v;
    DATA();
    ~DATA ();
};
DATA  ::DATA()
{
}
DATA  ::~DATA()
{
}

DATA* new_D(){
    DATA* p = new DATA;
    if(p == NULL) return;
    return p;
}
void free_D(DATA*p){
    if(p==NULL) return;
    delete p;
}




int main(){
    int n,m;
    cin >> n >> m;

    for(int i = 0; i<m; i++){
        
    }
}