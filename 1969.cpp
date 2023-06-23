// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // bool operator<(string a, string b){
// //     return a<b;
// // }
// bool compair(pair<string, int> a, pair<string, int> b){
//     if(a.second==b.second)
//         return a.first<b.first;
//     return a.second < b.second;
// }

// int main(){
//     int n, m;
//     cin >> n >> m;
    
//     vector<string> DNA;
//     vector<int> hammingDistance[n];

//     for(int i=0; i<n; i++){
//         string tmp;
//         cin >> tmp;
//         DNA.push_back(tmp);
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==j)
//                 hammingDistance[i].push_back(0);
//             else if(i>j)
//                 hammingDistance[i].push_back(hammingDistance[j][i]);
//             else{
//                 int cnt=0;
//                 for(int k=0; k<m; k++)
//                     if(DNA[i][k]!=DNA[j][k])
//                         cnt++;
//                 hammingDistance[i].push_back(cnt);
//             }
//         }
//     }
//     vector<pair<string, int> > sumOfhammingDistance;

//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=0; j<n; j++){
//             sum+=hammingDistance[i][j];
//         }
//         sumOfhammingDistance.push_back(pair<string, int>(DNA[i],sum));
//     }
    
//     sort(sumOfhammingDistance.begin(), sumOfhammingDistance.end(), compair);
//     for (int i = 0; i < n; i++)
//     {
//         cout << sumOfhammingDistance[i].first << " " << sumOfhammingDistance[i].second << "\n";
//     }
    
//     //cout << sumOfhammingDistance[0].first << "\n" << sumOfhammingDistance[0].second;

// }


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<string> DNA;
    int hammingDistance=0;
    
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        DNA.push_back(tmp);
    }

    vector<char> hammingDNA;
    for(int i=0; i<m; i++){
        pair<char, int> countingDNA[4]; // A T G C
        countingDNA[0].first='A';
        countingDNA[1].first='T';
        countingDNA[2].first='G';
        countingDNA[3].first='C';

        for(int j=0; j<n; j++){
            if(DNA[j][i]=='A')
                countingDNA[0].second++;
            else if(DNA[j][i]=='T')
                countingDNA[1].second++;
            else if(DNA[j][i]=='G')
                countingDNA[2].second++;
            else if(DNA[j][i]=='C')
                countingDNA[3].second++;
        }
        int mostAppearedDNAnum=countingDNA[0].second;
        char mostAppearedDNA=countingDNA[0].first;
        for(int k=1; k<4; k++){
            if(mostAppearedDNAnum<countingDNA[k].second||(mostAppearedDNAnum==countingDNA[k].second&&mostAppearedDNA>countingDNA[k].first)){
                mostAppearedDNAnum=countingDNA[k].second;
                mostAppearedDNA=countingDNA[k].first;
            }
        }
        hammingDNA.push_back(mostAppearedDNA);

        for(int k=0; k<n; k++)
            if(mostAppearedDNA!=DNA[k][i])
                hammingDistance++;
    }

    for(int i=0; i<m; i++)
        cout << hammingDNA[i];
    cout << "\n" << hammingDistance;
}