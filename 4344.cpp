#include <iostream>
using namespace std;

int main(){
    int c;
    cin >> c;
    int n;
    double mean;
    int count;
    for(int i = 0; i < c; i++){
        cin >> n;
        mean = 0;
        count = 0;
        double* score = new double[n];
        for(int j = 0; j < n; j++){
            cin >> score[j];
            mean += score[j];
        }
        mean = mean / n;
        for(int k = 0; k < n; k++){
            if(score[k] > mean) count++;
        }
        cout << fixed;
        cout.precision(3);
        cout << ((double)count / n) * 100<< "%\n";

        delete[] score;
    }
}