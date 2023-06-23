#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> DNA;
    int n;
    cin >> n;
    char ch;
    for(int i=0; i<n; i++){
        cin >> ch;
        DNA.push(ch);
    }

    while (1){
        if(DNA.size()==1)
            break;

        char n,n_1;

        n=DNA.top();
        DNA.pop();
        n_1=DNA.top();
        DNA.pop();
        
        if((n=='A'&&n_1=='A')||(n=='C'&&n_1=='A')||(n=='A'&&n_1=='C')||(n=='T'&&n_1=='G')||(n=='G'&&n_1=='T'))
            ch='A';
        else if((n=='G'&&n_1=='G')||(n=='T'&&n_1=='A')||(n=='A'&&n_1=='T')||(n=='T'&&n_1=='C')||(n=='C'&&n_1=='T'))
            ch='G';
        else if((n=='C'&&n_1=='C')||(n=='A'&&n_1=='G')||(n=='G'&&n_1=='A'))
            ch='C';
        else if((n=='T'&&n_1=='T')||(n=='G'&&n_1=='C')||(n=='C'&&n_1=='G'))
            ch='T';
        
        DNA.push(ch);
    }
    cout << DNA.top() << "\n";
}