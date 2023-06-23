#include <iostream>
using namespace std;

void printStar(int n){
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
}
void printSpace(int n){
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        printStar(i);
        printSpace(2*n-2*i);
        printStar(i);
        cout << "\n";
    }
    for (int i = n-1; i >= 1; i--)
    {
        printStar(i);
        printSpace(2*n-2*i);
        printStar(i);
        cout << "\n";
    }
    
}