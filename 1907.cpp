#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
using namespace std;

class Term
{
private:
    
public:
    int C;
    int H;
    int O;
    Term();
    ~Term();
};

Term::Term()
{
    C=0;
    H=0;
    O=0;
}

Term::~Term()
{
}

class Coefficient
{
private:
    
public:
    int x,y,z;
    Coefficient();
    ~Coefficient();
};

Coefficient::Coefficient()
{
}

Coefficient::~Coefficient()
{
}

bool compair(Coefficient& a, Coefficient&b){
    if(a.x==b.x){
        if(a.y==b.y)
            return a.z<b.z;
        return a.y<b.y;
    }
    return a.x<b.x;
}
int main(){
    string formular;
    cin >> formular;

    Term terms[3];
    int idx=0;
    
    for(int i=0; i<formular.size(); i++){
        if(formular[i]=='C'||formular[i]=='H'||formular[i]=='O'){
            if(i+1<formular.size()&&(formular[i+1]<='9'&&formular[i+1]>='2')){
                if(formular[i]=='C')
                    terms[idx].C+=(formular[i+1]-'0');
                else if(formular[i]=='H')
                    terms[idx].H+=(formular[i+1]-'0');
                else if(formular[i]=='O')
                    terms[idx].O+=(formular[i+1]-'0');
            }
            else{
                if(formular[i]=='C')
                    terms[idx].C++;
                else if(formular[i]=='H')
                    terms[idx].H++;
                else if(formular[i]=='O')
                    terms[idx].O++;
            }
        }
        else if(formular[i]=='+'||formular[i]=='=')
            idx++;
    }
    
    vector<Coefficient> ans;
    Coefficient tmp;
    int M1=terms[0].C+terms[0].H+terms[0].O;
    int M2=terms[1].C+terms[1].H+terms[1].O;
    int M3=terms[2].C+terms[2].H+terms[2].O;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            for(int k=1; k<=10; k++){
                if((i*terms[0].C+j*terms[1].C==k*terms[2].C)&&(i*terms[0].H+j*terms[1].H==k*terms[2].H)&&(i*terms[0].O+j*terms[1].O==k*terms[2].O)){
                    tmp.x=i;
                    tmp.y=j;
                    tmp.z=k;
                    ans.push_back(tmp);
                } 
            }
        }
    }

    sort(ans.begin(), ans.end(), compair);
    cout << ans.front().x << " " << ans.front().y << " " << ans.front().z << "\n";
}