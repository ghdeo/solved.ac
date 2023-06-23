#include <iostream>
#include <string>

using namespace std;

int countVowl(string str);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while (getline(cin, str))
    {
        if (str == "#") {
            break;
        }

        cout << countVowl(str) << "\n";
    }
    
}

int countVowl(string str) {
    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' 
        || str[i] == 'A' 
        || str[i] == 'e' 
        || str[i] == 'E'
        || str[i] == 'i'
        || str[i] == 'I' 
        || str[i] == 'o' 
        || str[i] == 'O' 
        || str[i] == 'u' 
        || str[i] == 'U') {
            cnt ++;
        }
    }

    return cnt;
}