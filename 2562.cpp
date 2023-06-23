#include <iostream>//최댓값
#include <vector>
#include <algorithm>

using namespace std;

class vpair
{
private:
    /* data */
public:
    int arg;
    int val;
    vpair(int, int);
    ~vpair();
};

vpair::vpair(int arg, int val)
{
    this->arg = arg;
    this->val = val;
}

vpair::~vpair()
{
}

bool cmp (vpair& a, vpair&b){
    return a.val > b.val;
}
int main(){
    vector <vpair> v;

    int n;
    for(int i = 0; i < 9; i++){
        cin >> n;
        v.push_back(vpair(i+1, n));
    }
    sort(v.begin(),v.end(), cmp);

    cout << v.front().val << endl;
    cout << v.front().arg << endl;

    return 0;
}