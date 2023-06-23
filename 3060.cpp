#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int dailyFeed;
        int intakeOfPig;
        long long sumOfIntake=0;
        cin >> dailyFeed;
        for(int j=0; j<6; j++){
            cin >> intakeOfPig;
            sumOfIntake+=intakeOfPig;
        }
            
        int numOfDays=0;
        int times=1;
        while(1){
            numOfDays++;
            if(dailyFeed<sumOfIntake*times)
                break;
            times*=4;
        }
        cout << numOfDays << "\n";
    }
}