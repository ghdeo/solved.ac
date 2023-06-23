#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std;

class PersonalData
{
private:
    
public:
    string name;
    int date;
    int month;
    int year;
    PersonalData();
    ~PersonalData();
};

PersonalData::PersonalData()
{
}

PersonalData::~PersonalData()
{
}
bool compair(PersonalData& a, PersonalData& b){
    if(a.year==b.year){
        if(a.month==b.month)
            return a.date>b.date;
        return a.month>b.month;
    }
    return a.year>b.year;
}
int main(){
    vector<PersonalData> people;
    int n;
    cin >> n;
    PersonalData tmp;
    for(int i=0; i<n; i++){
        cin >> tmp.name >> tmp.date >> tmp.month >> tmp.year;
        people.push_back(tmp);
    }
    sort(people.begin(), people.end(),compair);
    cout << people.front().name << "\n";
    cout << people.back().name << "\n";
}   