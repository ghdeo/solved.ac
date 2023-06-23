#include <iostream>
#define PI 3.14159265359
using namespace std;

int main(){
    int r;
    double ans1, ans2;

    cin >> r;
    ans1=(double)r*r*PI;
    ans2=(double)r*r*2;

    printf("%.6lf\n%.6lf\n",ans1,ans2);
}