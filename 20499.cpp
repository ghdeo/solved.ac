#include <iostream>

using namespace std;

int main(){
    int k,d,a;
    scanf("%d/%d/%d",&k,&d,&a);

    cout << ((k+a<d||d==0) ? "hasu\n" : "gosu\n");
}