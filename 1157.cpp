#include <iostream>
#include <string>
using namespace std;
int alphabet[26]={0};
int main(){
char answer;
    string str;
    cin >> str;
int most=0;
int loc;
for(int i=0; i<str.size();i++)
    {
if(str[i]<91) // 대문자
        {
            alphabet[str[i]-65]++;
        }
else
        {
            alphabet[str[i]-97]++;
        }
    }
for(int i=0; i<26; i++)
    {
if(most<alphabet[i])
        {
            most = alphabet[i];
            loc = i;
        }
    }
for(int i=0; i<26; i++)
    {
if(loc!=i)
        {
if(most==alphabet[i])
            {
                cout << "?";
return 0;
            }
        }
    }
    answer = loc+65;
    cout << answer;
return 0;
}